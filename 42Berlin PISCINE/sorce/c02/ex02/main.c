#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str);

int	main()
{
	char	*str = "Khashayar!";
	char	*str1 = "";
	char	*str2 = "@$";
	char	*str3 = "kh@$";

	printf("for -Khashayar-result is %d \n", ft_str_is_alpha(str));
	printf(" '' is %d \n", ft_str_is_alpha(str1));
	printf("@$ is %d \n", ft_str_is_alpha(str2));
	printf("kh@$ is %d \n", ft_str_is_alpha(str3));

	return (0);
}
