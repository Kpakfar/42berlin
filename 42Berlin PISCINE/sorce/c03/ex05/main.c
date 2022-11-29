#include<stdio.h>
#include <bsd/string.h>


unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(int ac, char **av)
{
	char	*src;
	char	*dest;
	unsigned int size;
	unsigned int s;
	
	size=7;
	dest = av[1];
	src = av[2];
	s = ft_strlcat(dest, src,size);
	printf("%s\n",dest);
	printf("%d\n", s);
	
	
	return (0);
}
