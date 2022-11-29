#include <stdio.h>

int	ft_atoi(char *str);
int     ft_find_next_prime(int nb);

int	main(int ac, char **av)
{
	int	nb = ft_atoi(av[1]);
	printf("%d", ft_find_next_prime(nb));
	return (0);
}
