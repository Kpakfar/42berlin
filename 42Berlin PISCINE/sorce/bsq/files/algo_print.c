/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbooth, kpakfar <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:31 by gbooth            #+#    #+#             */
/*   Updated: 2022/07/13 23:29:07 by gbooth, kpa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "headers.h"

// print the print matrix to screen
void	print_int_matrix(int **matrix, int off, int size)
{
	int	x;
	int	y;

	x = off;
	while (x < size)
	{
		y = off;
		while (y < size)
		{
			ft_putchar(matrix[x][y] + '0');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

// print the print matrix to screen
void	print_char_matrix(char **prt_mat, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			ft_putchar(prt_mat[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int	**ft_create_int_matrix(int size)
{
	int	**grid;
	int	i;

	grid = malloc(size * sizeof(int *));
	i = 0;
	while (i < size)
	{
		grid[i] = malloc(size * sizeof(int));
		i++;
	}
	return (grid);
}

char	**ft_create_char_matrix(char size)
{
	char	**grid;
	int		i;

	grid = malloc(size * sizeof(char *));
	i = 0;
	while (i < size)
	{
		grid[i] = malloc(size * sizeof(char));
		i++;
	}
	return (grid);
}
