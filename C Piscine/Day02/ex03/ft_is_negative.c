/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:11:45 by jcope             #+#    #+#             */
/*   Updated: 2018/07/26 22:38:43 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	while (n < 0)
	{
		ft_putchar('N');
		break ;
	}
	while (n > 0 || !n)
	{
		ft_putchar('P');
		break ;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int number_to_check;

	number_to_check = 2;
	ft_is_negative(number_to_check);
	ft_putchar('\n');
	return (0);
}
