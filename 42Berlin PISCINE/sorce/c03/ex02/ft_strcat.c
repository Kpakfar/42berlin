/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:15:17 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/02 18:24:18 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*holder;

	holder = dest;
	while (*holder)
		holder++;
	while (*src)
	{
		*holder = *src;
		holder++;
		src++;
	}
	*holder = '\0';
	return (dest);
}
