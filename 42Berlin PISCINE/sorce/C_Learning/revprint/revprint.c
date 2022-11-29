/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:01:40 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/30 19:35:54 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
char *ft_rev_print(char *str)
{
    int count=0;
    int i=1;
   
    while(str[i] != '\0')
    {
        i++;
    }
    
    printf ("%d\n", i);
    
    while(i>=0)
    {
        write(1,&str[i],1);
        i--;
    }
    write(1,"\n",1);
    write(1,"-",1);
    return(str);
}


int main()
{
    ft_rev_print("");
}
