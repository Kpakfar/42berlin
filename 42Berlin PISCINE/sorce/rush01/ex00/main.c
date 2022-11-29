/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Timoti,kpakfar,mintran <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:13:35 by Timoti,kpak       #+#    #+#             */
/*   Updated: 2022/07/03 22:28:31 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		**ft_populate_grid(int *arr, int size);
void	ft_print_int_grid(int **grid, int size);

int	ft_atoi_arr(char *str, int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size && str[j])
	{
		if (str[j] != ' ' && j % 2 == 0)
		{
			if (str[j] >= '1' && str[j] <= '9')
			{
				arr[i] = str[j] - '0';
			}
			i++;
			j++;
		}
		else if (str[j] == ' ' && j % 2 != 0)
			j++;
		else
			return (0);
	}
	return (1);
}




int	main(int argc, char **argv)
{
	int	i;
	int	*arr;
	int	size;

	size = 0;
	if (argc != 2)
		write(2, "please input just a param.\n", 26);
	else
	{
		i = 0;
		while (argv[1][i])
		{
			size++;
			i++;
		}
		size++;
		size /= 2;
		if(size % 4 != 0)
			write (2, "Not a valid param.\n", 19);
		arr = malloc (sizeof (int) * size);
		if (ft_atoi_arr(argv[1], arr, size))
			ft_populate_grid(arr, size / 4);
		else
			write (2, "please input just a param.\n", 26);
	}
	return (0);
}
