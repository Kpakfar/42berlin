/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Timoti,kpakfar,mintran <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:34:14 by Timoti,kpak       #+#    #+#             */
/*   Updated: 2022/07/02 13:10:58 by Timoti,kpak      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	dup_checker(int *arr, int size)
{
	int	result;
	int	i;
	int	j;

	result = 1;
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (result);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi(char str)
{
	int	value;

	value = str - '0';
	return (value);
}
/*
int	main(int argc, char **argv)
{
	int	arr[argv[2][0]];
	int	i;
	int	size;

	i = 0;
	size = ft_atoi(argv[2][0]);
	if (argc == 3)
	{
		while (argv[1][i])
		{
			arr[i] = ft_atoi(argv[1][i]);
			i++;
		}
		printf("result is: %d\n", dup_checker(arr,size));
	}
	return (0);
}
*/
