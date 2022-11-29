#include <stdio.h>
#include <string.h>

char    *ft_strcapitalize(char *str);

int main()
{
    char str[] ="salut, COMMENT tu vas ? 42mots quarAnte-deux; cinquante+et+un";
    char str2[]="Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    char str3[] ="r1*pjG[D/?w^$ThB9'Xz'BuyzvRouztpft@**u6";
    char str4[]="R1*Pjg[D/?W^$Thb9'Xz'Buyzvrouztpft@**U6";

    int result;
    ft_strcapitalize(str);
    printf("\n%s\n\n", str);
    result=strcmp(str,str2);

    if (result==0)
    	printf("OK! test passed\n");
    else 
    	printf("No!!\n");

    ft_strcapitalize(str3);
    printf("\n%s\n\n", str3);
    result=strcmp(str3,str4);
    if (result==0)
    	printf("OK! test passed\n");
    else 
    	printf("No!!\n");
    return 0;
}
