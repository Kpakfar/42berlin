/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:39:46 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/01 11:50:51 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



int main(int argc, char **argv)
{
	int i=0;
	if(argc ==4)
	{
		while(argv[1][i])
		{
			if(argv[2][1] == '\0' && argv[3][1]=='\0')
			{
				if(argv[1][i] == argv[2][0])
					argv[1][i]=argv[3][0];
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
