/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:52:03 by mintran           #+#    #+#             */
/*   Updated: 2022/07/03 21:53:34 by mintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	validate(int *arr, int n, int size)
{
	int	i;
	int	max;
	int	count;

	max = arr[0];
	count = 1;
	while (i < size - 1)
	{
		if (max < arr[i + 1])
		{
			max = arr[i + 1];
			count++;
		}
		i++;
	}
	if (count == n)
		return (1);
	else
		return (0);
}

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
			if (arr[i] != 0 && arr [j] != 0 && arr[i] == arr[j])
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

// int	main(int argc, char **argv)
// {
// 	int	arr[argv[2][0]];
// 	int	i;
// 	int	size;

// 	i = 0;
// 	size = ft_atoi(argv[2][0]);
// 	if (argc == 3)
// 	{
// 		while (argv[1][i])
// 		{
// 			arr[i] = ft_atoi(argv[1][i]);
// 			i++;
// 		}
// 		printf("result is: %d\n", dup_checker(arr,size));
// 	}
// 	return (0);
// }

/*
int main(void)
{
	int	arr[4] = {3, 4, 1, 2};
	int	n = 3;
	int	size = 4;

	if (validate(arr, n, size))
		printf("OK");
	else
		printf("KO");
	return (0);
}
*/
