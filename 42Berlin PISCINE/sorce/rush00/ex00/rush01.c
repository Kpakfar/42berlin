/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praghura, ngruber, smariano, kpakfar       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:55:50 by praghura          #+#    #+#             */
/*   Updated: 2022/06/26 13:34:19 by ngruber          ###   ########.fr       */
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
			if ((i == 1 && j == 1) || ((i == x && j == y && i != 1 && j != 1)))
				ft_putchar('/');
			else if ((i == x && j == 1) || (i == 1 && j == y))
				ft_putchar('\\');
			else if ((i == 1 || i == x) || (j == 1 || j == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
