/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:36:06 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/07 10:37:52 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		i;

	i = 0;
	arr = 0;
	if (min >= max)
		return (arr);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min ++;
	}
	return (arr);
}
