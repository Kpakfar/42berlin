#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{

	char str[]="abcd";
	char str2[]="abc";
	unsigned int size = 4;

	char *st1=str;
	char *st2=str2;
	
	printf("\n<<<------------------------------->>>\n");
	printf("St1 is ""%s"" and\nst2 is:""%s"" and\n size is: %d\n and result is: %d\n------------------\n",st1, st2, size,ft_strncmp(st1,st2,size));
	printf("%d",strncmp(st1,st2,size));
	return 0;
}
