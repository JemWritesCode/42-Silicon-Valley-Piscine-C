////// testing only
#include <unistd.h>

void ft_putnbr(int nb);

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnumbertest(int n)
{
	ft_putchar(n + '0');
}

int		main(void)
{
	ft_putnbr(-987654321);
//ft_putnumbertest(58);
	return (0);
}


