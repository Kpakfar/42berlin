/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_solve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbooth, kpakfar <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:31 by gbooth            #+#    #+#             */
/*   Updated: 2022/07/13 23:29:02 by gbooth, kpa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "headers.h"

// used to calc minimum of three looked up values in dp_mat
// (then add to value at x,y in map matrix)
int	find_smallest(int a, int b, int c)
{
	int	small;

	if (a < b)
	{
		if (b < c)
			small = a;
		else
		{
			if (a < c)
				small = a;
			else
				small = c;
		}
	}
	else
	{
		if (b < c)
			small = b;
		else
			small = c;
	}
	return (small);
}

//	current_square_found = 0; removed
int	find_largest_square(int **map_mat, int **dp_mat, int size)
{
	int	x;
	int	y;
	int	current_square_found;
	int	largest_square_found;

	largest_square_found = 0;
	x = -1;
	while (++x < size)
	{
		y = -1;
		while (++y < size)
		{
			if (map_mat[x][y] == 1)
			{
				current_square_found = 1 + find_smallest(
						dp_mat[x + 1][y - 1 + 1], dp_mat[x - 1 + 1][y - 1 + 1],
						dp_mat[x - 1 + 1][y + 1]);
				if (current_square_found > largest_square_found)
					largest_square_found = current_square_found;
				dp_mat[x + 1][y + 1] = current_square_found;
			}
		}
	}
	return (largest_square_found);
}

// take first 'largest value' found in matrix (rows first then cols)
// fill up&left from that point by the largest value [in map_mat]
// value 2 represents filled state
void	fill_map_mat(int **map_mat, int **dp_mat, int size, int largest)
{
	int	x;
	int	y;
	int	fill_x;
	int	fill_y;
	int	stop;

	stop = 0;
	x = -1;
	while (++x < size && stop == 0)
	{
		y = -1;
		while (++y < size && stop == 0)
			if (dp_mat[x + 1][y + 1] == largest)
				stop = 1;
	}
	fill_x = x - 1;
	fill_y = y - 1;
	x = -1;
	while (++x < largest)
	{
		y = -1;
		while (++y < largest)
			map_mat[fill_x - x][fill_y - y] = 2;
	}
}

// convert to display format (empty_char, obstacle_char, full_char)
void	cnvt_map_mat(int **map_mat, char **prt_mat, int size, t_map *param)
{
	int	char_to_print;
	int	x;
	int	y;

	x = -1;
	while (++x < size)
	{
		y = -1;
		while (++y < size)
		{
			if (map_mat[x][y] == 1)
				char_to_print = param->empty;
			if (map_mat[x][y] == 0)
				char_to_print = param->obstacle;
			if (map_mat[x][y] == 2)
				char_to_print = param->full;
			prt_mat[x][y] = char_to_print;
		}
	}
}

void	solve(int **map, t_map *param)
{
	int		**dp_mat;
	char	**prt_mat;
	int		largest_square_found;
	int		size;

	size = 0;
	size = param->size;
	dp_mat = ft_create_int_matrix(size + 1);
	prt_mat = ft_create_char_matrix(size);
	largest_square_found = find_largest_square(map, dp_mat, size);
	fill_map_mat(map, dp_mat, size, largest_square_found);
	cnvt_map_mat(map, prt_mat, size, param);
	print_char_matrix(prt_mat, size);
	freemap(map, size);
	freemap(dp_mat, size);
	freechar(prt_mat, size);
}
