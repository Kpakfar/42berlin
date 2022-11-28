/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 08:28:11 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/24 08:55:05 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}
