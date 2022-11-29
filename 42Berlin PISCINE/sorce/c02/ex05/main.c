#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int	main()
{
	char	*str = "KHASHAYAR";
	char	*str1 = "";
	char	*str2 = "12472847847";
	char	*str3 = "Khash";

	printf("for -KHASHAYAR-result is %d \n", ft_str_is_uppercase(str));
	printf(" '' is %d \n", ft_str_is_uppercase(str1));
	printf("12472847847 is %d \n", ft_str_is_uppercase(str2));
	printf("Khash is %d \n", ft_str_is_uppercase(str3));

	return (0);
}
