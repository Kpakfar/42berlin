/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkirov, kpakfar, ktaba <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:44:03 by bkirov, kpa       #+#    #+#             */
/*   Updated: 2022/07/10 21:21:42 by ktaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

typedef struct t_keylist
{
	long long	nb;
	char		*val;
}	t_keylist;
long long	ft_atoi(char *str);
char		*ft_strdup(char *src);
void		ft_putstr(char *str);
char		*ft_getnum(int fd);
char		*ft_getvalu(int fd, char *c);
int			ft_str_is_numeric(char *str);
t_keylist	*pars(char *file);

#endif
