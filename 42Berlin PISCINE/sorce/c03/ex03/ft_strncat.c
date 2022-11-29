/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:28:16 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/02 18:39:25 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*holder;
	unsigned int	i;

	holder = dest;
	i = 0;
	while (*holder)
		holder++;
	while (i < nb && *src)
	{
		*holder = *src;
		holder++;
		src++;
		i++;
	}
	*holder = '\0';
	return (dest);
}
