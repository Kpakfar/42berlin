#include <stdio.h>

int	ft_atoi(char *str);
int	ft_recursive_factorial(int nb);

int	main(int ac, char **av)
{
	char	*str;
	str = av[1];
	printf("%d", ft_recursive_factorial(ft_atoi(str)));
	return (0);
}
