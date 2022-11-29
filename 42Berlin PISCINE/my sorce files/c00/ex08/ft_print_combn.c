/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:29:46 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/27 15:37:34 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_recursive(int n, int position, char *output, int value)
{
	output[position] = value + 1;
	if (n == position)
	{
		write (1, output, n);
		if (! (output[position - (n)] == '9' - (n - 1)))
			write (1, ", ", 2);
		return ;
	}
	while (output[position] <= '9' - (n - 1) + position)
	{	
		ft_print_recursive(n, position + 1, output, output[position]);
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

int	main(void)
{
	ft_print_combn(2);
	write (1, "\n\n", 2);
	ft_print_combn(3);
	return (1);
}
