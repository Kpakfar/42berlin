#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int	main()
{
	char	*str = "Khashayar!";
	char	*str1 = "";
	char	*str2 = "12472847847";
	char	*str3 = "121kh@$";

	printf("for -Khashayar-result is %d \n", ft_str_is_numeric(str));
	printf(" '' is %d \n", ft_str_is_numeric(str1));
	printf("12472847847 is %d \n", ft_str_is_numeric(str2));
	printf("121kh@$ is %d \n", ft_str_is_numeric(str3));

	return (0);
}
