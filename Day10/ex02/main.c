// for testing only
//
#include <stdio.h>
int		*ft_map (int *tab, int length, int (*f)(int));

int		add_five(int i)
{
	i += 5;
	return (i);
}

int		main(void)
{
	int tab[5] = {1,2,3,4,5};
	ft_map(tab, 4, &add_five);
	for(int i = 0; i < 5; i++)
	{
		printf("%d", tab[i]);
		printf("\n");
	}
}




