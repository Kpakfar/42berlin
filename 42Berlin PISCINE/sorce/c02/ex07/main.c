#include <stdio.h>
#include <string.h>

char    *ft_strupcase(char *str);

int	main()
{
	char	str[] = "khashayar";

	//char	*str1 = "";
	//char	*str2 = "12472847847";
	//char	*str3 = "Khash";
	//char	*str4 = "K@h@ash";

	ft_strupcase(str);

	printf("for -khashayar-result is %s \n", str);

	//printf(" '' is %s \n", ft_strupcase(str1));
	//printf("12472847847 is %s \n", ft_strupcase(str2));
	//printf("Khash is %s \n", ft_strupcase(str3));
	//printf("K@h@ash is %s \n", ft_strupcase(str4));
	return (0);
}
