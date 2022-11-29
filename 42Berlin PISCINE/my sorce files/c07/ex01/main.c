#include <stdio.h>

int	*ft_range(int min, int max);

int		main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i = 0;
	int	size;

	min = 2;
	max = 10;
	size = max - min;
	arr = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}

}
