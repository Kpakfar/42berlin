/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:15:21 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/01 10:36:09 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void alpha_mirror(char *str)
{
	while(*str)
	{
		if(*str >='A' && *str<='M')
			*str = 'Z'-(*str-'A');
		else if(*str >='a' && *str<='m')
			*str = 'z' -(*str- 'a');
		else if (*str >='N' && *str <= 'Z')
			*str= 'A'+ ('Z' - *str);
		else if (*str >='n' && *str <='z')
			*str = 'a'+('z' - *str);

		write (1,str,1);
		str++;
	}
}

int main(int argc, char **argv)
{
	if(argc==2)
	{
		alpha_mirror(argv[1]);
	}
	write(1,"\n",1);
	return(0);
}
