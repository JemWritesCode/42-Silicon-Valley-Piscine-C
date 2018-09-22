
/// testing only

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char a;
	char b;

	a = 'A';
	b = 'a';
	printf("%d", ft_strcmp(&a, &b));
	return (0);
}
