#include <stdio.h>

int	ft_atoi(char *str);
int	ft_fibonacci(int index);

int	main(int ac, char **av)
{
	int 	index;
	int	max;

	max = ft_atoi(av[1]);
	index = 0;
	printf("the formula is: Fn+1 = Fn + Fn –1\n");
	printf("The series is: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ... \n               ");

	for (; index <= max; index++)
		printf("%d, ", ft_fibonacci(index));
	return (0);
}
