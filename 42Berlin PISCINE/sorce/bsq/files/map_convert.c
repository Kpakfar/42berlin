/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbooth, kpakfar <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:46:30 by gbooth, kpa       #+#    #+#             */
/*   Updated: 2022/07/13 23:28:56 by gbooth, kpa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	first_line(char *str, t_map *param)
{
	int		i;
	char	tmp[10];

	i = -1;
	if (str[0] >= '0' && str[0] <= '9')
	{
		while (str[++i] >= '0' && str [i] <= '9')
			tmp[i] = str [i];
		param -> size = ft_atoi(tmp);
		param ->empty = str[i++];
		param -> obstacle = str[i];
		param -> full = str[++i];
		if (str[++i] != '\n')
			return (ft_map_error("No New Line - first line"));
	}
	return (i);
}

int	fill_map_num(int **map, char c, t_map *param, t_loc loc)
{		
	if (c == param -> empty)
		map[loc.x][loc.y] = 1;
	else if (c == param -> obstacle)
		map[loc.x][loc.y] = 0;
	return (1);
}

int	check_lines(char *str, t_map *param, int **map, int len_of_firstline)
{
	int		index;
	int		k;
	t_loc	loc;

	index = -1;
	k = len_of_firstline;
	while (str[++k] != '\0')
	{
		if (str[k] != param -> empty && str[k] != param -> obstacle
			&& str[k] != param->full && str[k] != '\n')
			return (ft_map_error("DIFF CHAR in Line"));
		if ((k - len_of_firstline -1) % param -> size + 1 == 0
			&& str[k] != '\n' && k != len_of_firstline + 1)
			return (ft_map_error("No NewLine\n"));
		else if ((k - len_of_firstline -1) % param -> size + 1 != 0
			&& str[k] != '\n')
		{
			index++;
			loc.x = index / param -> size;
			loc.y = index % param -> size;
			fill_map_num(map, str[k], param, loc);
		}
	}
	solve(map, param);
	return (0);
}	

int	readfile(char *file, int length, char *str)
{
	int		fd;
	int		result;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_map_error("Can't read or find the file");
		return (0);
	}
	result = read(fd, str, length);
	if (result < 0)
	{
		ft_map_error("Can't read - first line");
		return (0);
	}
	close(fd);
	return (1);
}

int	pars(char *file, t_map *param)
{
	int		len_of_firstline;
	int		size_of_str;
	char	*str;
	int		**map;

	str = malloc(sizeof(char) * 13);
	if (readfile(file, 13, str) == 0)
		return (0);
	len_of_firstline = first_line(str, param);
	free(str);
	str = NULL;
	size_of_str = ((param -> size + 1) * (param -> size + 1));
	str = malloc(sizeof(char) * size_of_str + len_of_firstline);
	readfile(file, size_of_str, str);
	map = ft_create_grid(param -> size);
	if (! check_lines(str, param, map, len_of_firstline))
	{
		return (0);
	}
	else
	{
		free(str);
		str = NULL;
		return (1);
	}
}
