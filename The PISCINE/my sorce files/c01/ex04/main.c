#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int  *b);

int main()
{    
        int a = 12;
        int b = 2;
        ft_ultimate_div_mod( &a, &b);
        printf("%d, %d",a ,b);
        return 0;
}  
