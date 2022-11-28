/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:56:47 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/30 21:43:03 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_dubles(char *str,char c,int pos)
{
	int i;
	i=0;
	while (i<pos)
	{
		if(str[i]==c)
			return 0;
		i++;
	}
	return 1;
}

void inter(char *str, char *str2)
{
	int i;
	int j;

	i=0;
	while(str[i])
	{
		j=0;
		while (str2[j])
		{
			if (str[i] == str2[i])
			{
				if (check_dubles(str,str[i],i)==1)
				{
					write (1,&str[i],1);
					break;
				}
			}
			j++;

		}
		i++;

	}
}

int main(int argc, char **argv)
{
	if (argc ==3)
		inter(argv[1],argv[2]);
	write(1,"\n",1);
	return (0);
}

