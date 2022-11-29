void    ft_ultimate_ft(int *********nbr);
#include <stdio.h>
int    main(void) {
    for (int i = 0; i < 5; ++i) {
        int tmp = i;
        int *p1 = &tmp;
        int **p2 = &p1;
        int ***p3 = &p2;
        int ****p4 = &p3;
        int *****p5 = &p4;
        int ******p6 = &p5;
        int *******p7 = &p6;
        int ********p8 = &p7;
        int *********p9 = &p8;
        ft_ultimate_ft(p9);
        printf("%d: %d\n", i, *********p9);
    }
    return (0);
}
