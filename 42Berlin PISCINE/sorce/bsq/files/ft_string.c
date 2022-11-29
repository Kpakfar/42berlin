/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbooth, kpakfar <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:28:35 by bkirov, kpa       #+#    #+#             */
/*   Updated: 2022/07/13 22:10:39 by gbooth, kpa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers.h"

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str < '0' || *str > '9'))
		{
			ft_putstr("please Enter a Valid number");
			return (0);
		}
		str++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int		i;
	long	result;

	i = 0;
	result = 0;
	while (str[i] && (str[i] == ' ' || (9 <= str[i] && (str[i] <= 13))))
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (result > MAXINT)
	{
		ft_putstr("MAXINT ERR");
		return (0);
	}	
	return (result);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

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
