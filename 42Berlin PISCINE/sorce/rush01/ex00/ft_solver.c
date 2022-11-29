/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfregni <tfregni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:16:35 by tfregni           #+#    #+#             */
/*   Updated: 2022/07/03 22:08:46 by tfregni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	**ft_populate_grid(int size);
int	validate(int *arr, int n, int size);
int	dup_checker(int *arr, int size);

void	ft_putnbr(int n)
{
	char	nbr;

	nbr = n + '0';
	write(1, &nbr, 1);
}

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(arr[i]);
		write(1, " ", 1);
	}
	write(1, "\n", 1);
}

int	is_safe(int **grid, int *args, int row, int col, int num)
{
	int	*arr_row;
	int	*arr_col;
	int	size;
	int	i;

	size = sizeof(args) / 2;
	arr_row = malloc(size * sizeof(int));
	arr_col = malloc(size * sizeof(int));
	grid[row][col] = num;
	i = 0;
	while (i < size)
	{
		arr_row[i] = grid[row][i];
		arr_col[i] = grid[i][col];
		i++;
	}
	if (!dup_checker(arr_row, size) && !dup_checker(arr_col, size))
		return (1);
	else
		return (0);
}

int	ft_solver(int **grid, int *args, int row, int col, int size)
{
	int	num;

	if (row == size - 1 && col == size)
		return (1);
	if (col == size)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] > 0)
		return (ft_solver(grid, args, row, col + 1, size));
	num = 1;
	while (num <= size)
	{
		if (is_safe(grid, args, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (ft_solver(grid, args, row, col + 1, size) == 1)
				return (1);
		}
		grid[row][col] = 0;
		num++;
	}
	return (0);
}
