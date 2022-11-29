#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char src[] ="khashayar";
	char dest[]="";
	
	unsigned int size;
	unsigned int length;

	size=8;
	printf("the dest by default is: %s \n",dest);
	
	length = ft_strlcpy(dest, src, size);
	printf("the dest is now: %s and the length is %d \n", dest, length);
	
	char src2[] ="khashayar";
	char dest2[]="";
	
	length= strlcpy(dest2, src2, size);
	printf("the dest is now: %s and the length is %d \n", dest2, length);
    return 0;
}

//-lbsd
