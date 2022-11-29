/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:29:46 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/27 15:53:14 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_recursive(int length, int position, char *output, int value)
{
	output[position] = value + 1;
	if (length == position)
	{
		write (1, output, length);
		if (! (output[position - (length)] == '9' - (length - 1)))
			write (1, ", ", 2);
		return ;
	}
	while (output[position] <= '9' - (length - 1) + position)
	{	
		ft_print_recursive(length, position + 1, output, output[position]);
		output[position]++;
	}
	output[position]++;
}

void	ft_print_combn(int n)
{
	char	arr[10];

	if (n >= 1 && n < 10)
		ft_print_recursive (n, 0, arr, '0' - 1);
	else
		write (1, "please input numbers 1 < n <10", 29);
}
