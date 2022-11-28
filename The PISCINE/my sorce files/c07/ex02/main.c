#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max);


int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&arr, min, max);
	while(i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}

}
