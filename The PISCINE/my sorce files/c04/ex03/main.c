#include <stdio.h>

int	ft_atoi(const char *str);

int	main(int ac, char **av)
{
	const  char		*str;
	
//	str = "     -----12312";
	str = av[1];	 
	printf("%d",ft_atoi(str));
	return (0);
}
