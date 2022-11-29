#include <stdlib.h>
#include <stdio.h>


char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 3 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 19 + 1);
	strs[0] = "the";
	strs[1] = "third";
	strs[2] = "week of the piscine";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
	free(result);
	return (0);
}
