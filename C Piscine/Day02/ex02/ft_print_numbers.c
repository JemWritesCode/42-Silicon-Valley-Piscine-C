/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 21:31:52 by jcope             #+#    #+#             */
/*   Updated: 2018/07/26 22:03:49 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char counter;

	counter = '0';
	while (counter <= '9')
	{
		ft_putchar(counter);
		counter++;
	}
}

int		main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}
