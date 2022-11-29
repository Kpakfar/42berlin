#include <stdio.h>

int	ft_atoi(char *str);
int	ft_iterative_power(int nb, int power);

int	main(int ac, char **av)
{
	int 	nb;
	int	power;

	nb= ft_atoi(av[1]);
	power = ft_atoi(av[2]);
	printf("%d", ft_iterative_power(nb,power));
	return (0);
}
