/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:47:30 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/30 18:53:11 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strlen(char *str)
{
        int count = 0;  
        while (*str)
        {   

                str++;
                count++;
        }
        return (count);
}


int main()
{
    printf("%d",ft_strlen("khashayar"));
}
