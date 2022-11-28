#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(int ac, char **av)
{
	char		*src;
	char		*dest;
	unsigned int	n;

	dest = av[1];
	src = av[2];
	n = 2;
	dest = ft_strncat(dest, src, n);
	printf("%s",dest);
	return (0);
}
