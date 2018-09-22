/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 23:08:15 by jcope             #+#    #+#             */
/*   Updated: 2018/07/26 23:41:35 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int i;
	int j;
	int x;
	
	i = 0;
	j = 0;
	x = 0;

	while(i <= 7)
	{
		while(j <= 8)
		{
			j = i + 1;
			j++;
			while(k <= 9)
			{
				k = j + 1;
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				ft_putchar(',');
				ft_putchar(' ')
				k++;
			}
		}
		i++
	}


}

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

int		main(void)
{
	ft_print_comb();
}
