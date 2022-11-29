#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	int		i;
	char	**split;
	(void)	argc;

	split = ft_split(argv[1], argv[2]);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
