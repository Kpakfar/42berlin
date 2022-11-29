/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:04:00 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/03 08:38:28 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (src[i] != '\0')
		i++;
	src_len = i;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dest_len = j;
	if (size <= dest_len || size == 0)
		return (size + src_len);
	k = 0;
	while (src[k] != '\0' && k < size - dest_len - 1)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}
