/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:54:16 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/01 12:19:38 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int main(int argc, char **argv)
{
	int i; 
	int count=0;

	i = 0;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				count= argv[1][i]-64;
			else if ((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				 count= argv[1][i]-96;
			while (count)
			{
				write(1,&argv[1][i],1);
				count--;

			}
			i++;
		}
	}
	write (1,"\n",1);

	return (0);
}
