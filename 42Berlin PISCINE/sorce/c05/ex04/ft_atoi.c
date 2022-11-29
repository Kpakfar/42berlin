/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpakfar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 09:32:41 by kpakfar           #+#    #+#             */
/*   Updated: 2022/07/03 12:47:24 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || 9 <= str[i]) && (str[i] <= 13))
			i++;
		else if (str[i] == '+')
			i++;
		else if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (str[i] && '0' <= str[i] && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
	}
	return (sign * result);
}
