#include<stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int ac, char **av)
{
	char	*str;
	char	*to_find;
	char 	*result;

	str = av[1];
	to_find = av[2];

	result = ft_strstr(str, to_find);
	printf("%s",result);
	return (0);
}
