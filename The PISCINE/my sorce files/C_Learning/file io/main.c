/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:44:39 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/09 20:14:09 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void)
{
	char	c[1];
	char	*arr;
	int	fd;
	int	i;

	i = 0;

	arr = malloc(sizeof(char) * 128);
	fd = open("test.txt", O_RDONLY);

	read(fd, c, 1);
	arr[i]= c[0];
	read(fd, c, 1);
	arr[++i]= c[0];
	read(fd, c, 1);
	arr[++i]= c[0];
	close(fd);

	printf("%s\n",arr);
	return 0;
}