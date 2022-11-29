#include <stdio.h>

int     ft_strcmp(char *s1, char *s2);

int main()
{
	printf("--for ""abcz"",""abca"" %d\n",ft_strcmp("abcz","abca"));
	printf("--for ""abcd"",""abcd"" %d\n",ft_strcmp("abcd","abcd"));
	printf("--for ""abca"",""abcz"" %d\n",ft_strcmp("abca","abcz"));
	/* code */
	return 0;
}
