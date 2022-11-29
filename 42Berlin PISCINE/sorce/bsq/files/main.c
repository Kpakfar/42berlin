/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbooth, kpakfar <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:00:38 by gbooth, kpa       #+#    #+#             */
/*   Updated: 2022/07/13 23:29:01 by gbooth, kpa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "headers.h"
#include "string.h"

int	main(int ac, char **av)
{
	int		i;
	t_map	map_params;

	i = 1;
	while (i < ac)
	{
		ft_putstr("\n -------------------\n The arg number:");
		ft_putnbr(i);
		ft_putstr("\n -------------------\n");
		if (!(pars(av[i++], &map_params)))
			continue ;
	}
	return (0);
}

// int stdin_read(char **matrix, t_fkey **fkey)
// {
// 	char	c;
// 	int		i;
// 	char	*str;

// 	str = (char *)malloc(sizeof(char) * 100);
// 	*matrix = (char*)malloc(sizeof(char) * BUFSIZE);
// 	*fkey = (t_fkey *)malloc(sizeof(t_fkey));
// 	if (read_first_line(STDIN_FILENO, *fkey, str))
// 	{
// 		free (str);
// 		return (1);
// 	}
// 	i = 0;
// 	while (read (STDIN_FILENO, &c, 1) > 0)
// 	{
// 		(*matrix)[i++] = c;
// 	}
// 	(*matrix)[i] = '\0';
// 	free(str);
// 	return (0)
// }
