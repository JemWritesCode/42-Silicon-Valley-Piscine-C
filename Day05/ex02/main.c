/// For testing only.

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	int done;
	done =	ft_atoi("hello");
	printf("Testing atoi: %d", done);
}
