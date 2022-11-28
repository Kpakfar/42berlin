#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int main()
{    
        int div;
        int mod;
        ft_div_mod(1, 0, &div, &mod);
        printf("%d, %d",div , mod);
        return 0;
}     
