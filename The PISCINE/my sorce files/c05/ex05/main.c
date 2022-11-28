#include <stdio.h>

int	ft_atoi(char *str);
int	ft_sqrt(int nb);

int	main(int ac, char **av)
{
	int	nb = ft_atoi(av[1]);
	printf("%d", ft_sqrt(nb));
	return (0);
}
