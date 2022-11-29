/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:47:19 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/30 22:04:40 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	if (argc==2)
	{
		i=0;
		while(argv[1][i] != '\0')
			i++;
		i-=1;

		while (argv[1][i]=='\t' || argv[1][i] == ' ')
			i--;
		while (i > 0)
		{
			if(argv[1][i] ==' ' && argv[1][i] == '\t')
			
				break;
			i--;
		}
		i++;
		while(argv[1][i] !='\0' && argv[1][i] !=' ' && argv[1][i] != '\t')
		{
				 write(1, &argv[1][i], 1);
				i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
