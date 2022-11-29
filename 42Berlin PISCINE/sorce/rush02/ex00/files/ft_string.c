/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkirov, kpakfar, ktaba <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:28:35 by bkirov, kpa       #+#    #+#             */
/*   Updated: 2022/07/10 19:23:21 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(str);
		str++;
	}
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str < '0' || *str > '9'))
		{
			ft_putstr("please Enter a Valid number");
			return (0);
		}
		str++;
	}
	return (1);
}

long long	ft_atoi(char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while (str[i] && (str[i] == ' ' || (9 <= str[i] && (str[i] <= 13))))
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (result > 9223372036854775807)
	{
		ft_putstr("Too Long for Us!");
		return (0);
	}	
	return (result);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *) malloc(sizeof(*dest) * len + 1);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
