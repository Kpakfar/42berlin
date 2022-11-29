#include <stdio.h>

int main()
{
	int i;
	int j;

	i=1;
	while (i<=9)
	{
		j=1;
		while (j<=9)
		{
			printf("%d ", i * j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
