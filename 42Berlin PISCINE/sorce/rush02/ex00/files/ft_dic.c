/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dic.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkirov, kpakfar, ktaba <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:28:35 by bkirov, kpa       #+#    #+#             */
/*   Updated: 2022/07/10 21:34:55 by ktaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "headers.h"

char	*ft_getnum(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (!(str))
		exit(1);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

char	*ft_getvalu(int fd, char *c)
{
	int		i;
	char	*str;

	str = 0;
	str = malloc(sizeof(char) * 128);
	if (!(str))
		exit(1);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

void	check_separators(t_keylist *arr, int fd, int i)
{
	char	c[1];
	char	*tmp;

	arr[i].nb = ft_atoi(ft_getnum(fd));
	read (fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	if (c[0] == ':')
		read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	tmp = ft_getvalu(fd, c);
	arr[i].val = ft_strdup(tmp);
	free(tmp);
}

t_keylist	*pars(char *file)
{
	int			i;
	int			fd;
	t_keylist	*arr;

	fd = open(file, O_RDONLY);
	arr = malloc(sizeof(t_keylist) * 42);
	if (fd == -1 || !(arr))
	{
		ft_putstr("Dict Error\n");
		exit(1);
	}
	i = 0;
	while (i < 41)
	{
		check_separators(arr, fd, i);
		i++;
	}
	close(fd);
	return (arr);
}
