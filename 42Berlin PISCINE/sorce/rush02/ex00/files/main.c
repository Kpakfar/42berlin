/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkirov, kpakfar, ktaba <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:28:35 by bkirov, kpa       #+#    #+#             */
/*   Updated: 2022/07/10 20:51:39 by ktaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <unistd.h>
#include <stdlib.h>

/*here we are getting the tens and using this in the getmagnitude
	function to cover all inputs*/
long long	gettens(long long nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

// here we are getting the magnitude of input in order to map each section
long long	getmagnitude(long long nb)
{
	if (nb >= 1000000000000000000LL)
		return (1000000000000000000LL);
	else if (nb >= 1000000000000000LL)
		return (1000000000000000LL);
	else if (nb >= 1000000000000LL)
		return (1000000000000LL);
	else if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (gettens(nb));
}

void	writenum(long long nb, t_keylist *dic, long long *init)
{
	long long	i;
	long long	res;

	i = 0;
	res = getmagnitude(nb);
	if (res >= 100)
		writenum(nb / res, dic, init);
	if (*init == 0)
		write(1, " ", 1);
	*init = 0;
	while (dic[i].nb != res)
		i++;
	ft_putstr(dic[i].val);
	if (res != 0)
	{
		if (nb % res != 0)
			writenum(nb % res, dic, init);
	}
}

int	arg_is_valid(char *str)
{
	if (ft_str_is_numeric(str))
	{
		if (ft_atoi(str) > 9223372036854775807)
		{
			ft_putstr("We are only able to reach 9223372036854775807.");
			ft_putstr("as a max value.\n");
			return (0);
		}
		else if (ft_atoi(str) < 0)
		{
			ft_putstr("Please enter an 0 or positive value!");
			return (0);
		}
		else
			return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_keylist		*dic;
	long long		*init;
	long long		init_address;

	init_address = 1;
	init = &init_address;
	if (ac == 2 && arg_is_valid(av[1]))
	{
		dic = pars("numbers.dict");
		writenum(ft_atoi(av[1]), dic, init);
	}
	else if (ac == 3 && arg_is_valid(av[2]))
	{
		dic = pars(av[1]);
		writenum(ft_atoi(av[2]), dic, init);
	}
	return (0);
}
