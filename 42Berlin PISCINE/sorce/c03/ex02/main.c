#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int 	main(int ac, char **av)
{
	char *src;
	char *dest;

	dest = av[1];
	src = av[2];

	dest =ft_strcat(dest, src);
	printf("%s",dest);
}
