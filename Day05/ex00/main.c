#include <unistd.h>

// DO NOT PUSH TO GIT, TESTING ONLY
void ft_putstr(char *str);

int		main(void)
{
	ft_putstr("hello");

	return (0);	
}

void	ft_putchar(char c)
{
	write (1,&c,1);
}
