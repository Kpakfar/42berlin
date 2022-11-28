#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;
	char	*allocated;

	str = "First test with malloc()";
	printf("original - <%s>  %p\n", str, str);
	allocated = strdup(str);
	printf("copied - with strdup : <%s>  %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied  : <%s>  %p\n", allocated, allocated);
}
