/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:54:18 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/30 10:44:42 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char str)
{
	char	*hex;

	ft_putchar('\\');
	hex = "0123456789abcdef";
	ft_putchar(hex[str / 16]);
	ft_putchar(hex[str % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 32) && (*str <= 126))
			ft_putchar (*str);
		else
			ft_print_hex (*str);
		str++;
	}
}
