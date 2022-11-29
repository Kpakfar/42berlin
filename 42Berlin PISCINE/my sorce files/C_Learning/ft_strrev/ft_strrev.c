/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:51:40 by kpakfar           #+#    #+#             */
/*   Updated: 2022/06/30 20:07:52 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	
	int i=0;
	int count=0;
	char tmp;

	while(str[count])
	{
		count++;
	}

	count-=1;

	while(count>i)
	{
		tmp=str[i];
		str[i]=str[count];
		str[count]=tmp;
		i++;
		count--;
	}

	return (str);
}

int main()
{
	char str[]="123456789";
	printf("new: %s",ft_strrev(str));
}
