/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:41:36 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/07 10:52:44 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	int		index;
	int		min_index;

	index = 0;
	min_index = min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (-1);
	while (min_index < max)
		arr[index++] = min_index++;
	*range = arr;
	return (max - min);
}
