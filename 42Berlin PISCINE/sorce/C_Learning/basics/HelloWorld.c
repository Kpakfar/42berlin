/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HelloWorld.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void func(char c)
{
	write(1,&c,1);
}

int ft(char c, int n)
{
int i=0; 
	while (i<n)
	{
		func(c);
		i++;
	}	
}
int main(void)
{
 	ft('@',42);
	func('\n');
	return(0);
}
