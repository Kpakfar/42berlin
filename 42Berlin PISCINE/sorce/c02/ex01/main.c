#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char	source[] = "Khashayar!";
	char	destination[] = "value";
	unsigned int n = 5;
	printf("before: destination is %s \n", destination);
	ft_strncpy(destination,source,n);
	printf("after: Now destination is %s", destination);
	return (0);
}
