/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:36:24 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/30 20:42:15 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i=0; 
    
    if(argc==2)
    {
        while (argv[1][i]) 
        {
            if((argv[1][i] >='a' && argv[1][i]<='m') || (argv[1][i] >='A' && argv[1][i]<='M'))
               argv[1][i] += 13;
            else if((argv[1][i] >='n' && argv[1][i]<='z') || (argv[1][i] >='N' && argv[1][i]<='Z'))
                argv[1][i] -= 13;
            
            write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}
