#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int	main()
{
	char	*str = "khashayar";
	char	*str1 = "";
	char	*str2 = "12472847847";
	char	*str3 = "Khash";

	printf("for -khashayar-result is %d \n", ft_str_is_lowercase(str));
	printf(" '' is %d \n", ft_str_is_lowercase(str1));
	printf("12472847847 is %d \n", ft_str_is_lowercase(str2));
	printf("Khash is %d \n", ft_str_is_lowercase(str3));

	return (0);
}
