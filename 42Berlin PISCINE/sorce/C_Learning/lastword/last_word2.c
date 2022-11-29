/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:22:01 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/01 09:28:56 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    last_word(char *str)
{
	int i;
	i=0;

	while (str[i] != '\0')
		i++;
	while (i >=0 && (str[i] == ' ' || str[i] == '\t' || str[i] !='\0'))
		i--;
	while (i >=0 && (str[i] != ' ' && str[i] != '\t'))
		i--;
	i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] !='\0')
	{
		write(1,str +i , 1);
		i++;
	}
}

 
int     main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
 
    write(1, "\n", 1);
    return (0);
}
