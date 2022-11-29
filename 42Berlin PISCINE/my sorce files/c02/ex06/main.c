#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int	main()
{
	char 	st[10] = "\n"; 
	char	*str = st;


	printf("'\n'-result is %d \n", ft_str_is_printable(str));
	printf("'Ab'-result is %d \n", ft_str_is_printable("Ab"));
	return (0);
}
