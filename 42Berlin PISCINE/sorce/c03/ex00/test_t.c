#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
        int     i;

        i = 0;
        while (s1[i])
        {
                if (s1[i] - s2[i] != 0)
                        return (s1[i] - s2[i]);
                i++;
        }
        if (!s1[i])
                return (s1[i] - s2[i]);
        else
                return (0);
}

int main()
{
	printf("--for ""abcz"",""abca"" %d\n",ft_strcmp("abcz","abca"));
	printf("--for ""abcd"",""abcd"" %d\n",ft_strcmp("abcd","abcd"));
	printf("--for ""abca"",""abcz"" %d\n",ft_strcmp("abca","abcz"));
	printf("--for ""abca"",""abcz"" %d\n",ft_strcmp("","abcz"));
	/* code */
	return 0;
}
