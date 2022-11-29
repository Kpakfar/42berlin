/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:36:44 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/01 09:49:06 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void cameltosnak(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "_",1);
			*str += 32;
		}
		write (1,str, 1);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		cameltosnak(argv[1]);
	write (1,"\n",1);
	return 0;
}
