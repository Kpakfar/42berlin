/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smariano, ngruber, smariano, kpakfar       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:33:44 by smariano          #+#    #+#             */
/*   Updated: 2022/06/26 13:37:57 by ngruber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	if (y <= 0 || x <= 0)
		write(2, "User Error: Please enter positive value.\n", 41);
	while (++j <= y && y > 0 && x > 0)
	{
		i = 0;
		while (++i <= x)
		{
			if ((i == 1 && j == 1) || ((i == 1 && j == y && j != 1)))
				ft_putchar('A');
			else if ((i == x && j == 1 && i != 1) || (i == x && j == y))
				ft_putchar('C');
			else if ((i < x) && (j == 1 || j == y))
				ft_putchar('B');
			else if ((j < y) && (i == 1 || i == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
