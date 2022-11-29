/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfregni <tfregni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:11:23 by tfregni           #+#    #+#             */
/*   Updated: 2022/07/03 21:48:13 by tfregni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_solver(int **grid, int *args, int row, int col, int size);
void	ft_print_int_grid(int **grid, int size);
void	ft_putnbr(int n);

/* Allocating memory for a grid with size named size
 * I first allocate one row of pointers with size named size
 * then each of these indexes point to a memory location
 * holding size int */
int	**ft_create_grid(int size)
{
	int	**grid;
	int	i;

	grid = malloc(size * sizeof(int *) + 1);
	i = 0;
	while (i < size)
	{
		grid[i] = malloc(size * sizeof(int) + 1);
		i++;
	}
	return (grid);
}

/* i = y coordinate
 * c = x coordinate
 * It calls ft_create_grid to malloc the memory for
 * a grid of given size and it populates it with 0s */
int	**ft_populate_grid(int *args, int size)
{
	int	i;
	int	c;
	int	**grid;

	grid = ft_create_grid(size);
	i = 0;
	c = 0;
	while (i < size)
	{
		while (c < size)
		{
			grid[i][c] = 0;
			c++;
		}
		i++;
		c = 0;
	}
	if (ft_solver(grid, args, 0, 0, size) == 1)
		ft_print_int_grid(grid, size);
	write(1, "\nError\n", 7);
	return (grid);
}

/* It prints a two-dimensional grid of given size */
void	ft_print_int_grid(int **grid, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		write(1, "\n", 1);
		while (c < size)
		{
			ft_putnbr(grid[i][c]);
			write(1, " ", 1);
			c++;
		}
		c = 0;
		i++;
	}
	write(1, "\n", 1);
}
