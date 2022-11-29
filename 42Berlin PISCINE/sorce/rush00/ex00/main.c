/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: praghura, ngruber, smariano, kpakfar       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:55:50 by praghura          #+#    #+#             */
/*   Updated: 2022/06/26 15:33:34 by praghura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	rush(int row, int col);
int		ft_atoi(char *str);
int		ft_str_is_numeric(char *str);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 3)
	{
		if (ft_str_is_numeric(argv[1]) > 0 && ft_str_is_numeric(argv[2]) > 0)
		{
			x = ft_atoi (argv[1]);
			y = ft_atoi (argv[2]);
			rush(x, y);
		}
		else
		{
			write(2, "String Error: Please enter two positive integers.\n", 51);
			return (1);
		}
	}
	else
	{
		write(2, "Parameter Error: Please enter two positive integers.\n", 53);
		return (argc);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (str[i] != '\0')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value);
}
