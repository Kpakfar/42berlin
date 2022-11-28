#include <stdio.h>
#include <string.h>

char    *ft_strlowcase(char *str);

int	main()
{
	char	str[] = "KHASHAYAR";
	char	str2[] = "PAkfar";

	ft_strlowcase(str);
	ft_strlowcase(str2);
	
	printf("for -KHASHAYAR-result is %s \n", str);
	printf("for PAkfar  is %s \n", str2);

	return (0);
}
