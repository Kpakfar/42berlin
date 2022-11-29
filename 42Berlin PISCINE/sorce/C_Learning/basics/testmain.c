#include <unistd.h>

void    ft_putchar(char c)
{
          write (1, &c, 1);
}

void    ft_print_alphabet(void)
{
         char    alphabet;
 
         alphabet = 'a';
         while (alphabet <= 'z')
         {
                 write(1, &alphabet, 1);
                 alphabet++;
         }
}


void    ft_print_reverse_alphabet(void)
 {
          char    alphabet;

         alphabet = 'z';
         while (alphabet >= 'a')
         {
                 write(1, &alphabet, 1);
                 alphabet--;
         }
 }

void    ft_print_numbers(void)
{
       char    digit;
       digit = '0';
       while (digit <= '9')
       {
                write(1, &digit, 1);
                 digit++;
       }
}

void    ft_is_negative(int n)
{

	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';

        if (n < 0)
        {
                 write(1, &negative, 1);
        }
        else
        {
                 write(1, &positive, 1);
	}
}

int 	main()
{
	ft_putchar('c');
	ft_putchar('\n');

	ft_print_alphabet();
	ft_putchar('\n');

	ft_print_reverse_alphabet();
	ft_putchar('\n');

	ft_print_numbers();
	ft_putchar('\n');

	ft_is_negative(-10);
	ft_putchar('\n');
	ft_is_negative(10);
	ft_putchar('\n');

	return 1;
}
