#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

int	main()
{
	int arr[9]={1,2,3,4,5,6,7,8,9};
	ft_rev_int_tab(arr, 9);
	for(int i = 0; i < 9; i++)
	{
		printf("%d, ",arr[i]);
	}

	printf("\n");

	int arr2[10]={1,2,3,4,5,6,7,8,9,10};

	ft_rev_int_tab(arr2, 10);
	for(int i = 0; i < 10; i++)
	{
		printf("%d, ",arr2[i]);
	}
	return (0);
}
