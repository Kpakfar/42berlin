#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
	
int	main()
{
	int arr[9]={1,12,3,1,5,-1,0,-89,123};
	ft_sort_int_tab(arr, 9);
	for(int i = 0; i < 9; i++)
	{
		printf("%d, ",arr[i]);
	}
	return (0);
}
