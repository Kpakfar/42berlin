/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbooth, kpakfar <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:44:03 by bkirov, kpa       #+#    #+#             */
/*   Updated: 2022/07/13 23:32:39 by kpakfar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# define MAXINT 2147483647
# include <unistd.h>

typedef struct s_map
{
	int		size;
	char	empty;
	char	obstacle;
	char	full;
}			t_map;

typedef struct s_loc
{
	int	x;
	int	y;

}		t_loc;

int		ft_atoi(char *str);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
int		ft_str_is_numeric(char *str);
int		ft_map_error(char *str);
int		pars(char *file, t_map *param);
int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_del_firstline(char *src, int len);
void	solve(int **map, t_map *param);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	**ft_create_char_matrix(char size);
int		**ft_create_int_matrix(int size);
void	print_char_matrix(char **prt_mat, int size);
int		**ft_create_grid(int size);
void	freemap(int **map, int size);
void	freechar(char **map, int size);

#endif
