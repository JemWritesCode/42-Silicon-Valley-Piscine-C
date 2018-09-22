/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 19:51:59 by jcope             #+#    #+#             */
/*   Updated: 2018/07/29 20:07:59 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int width;
	int length;

	length = 1;
	while (length <= y)
	{
		width = 1;
		while (width <= x)
		{
			if ((width == x && length == y) || (width == 1 && length == 1))
				ft_putchar('/');
			else if ((width == x && length == 1) || (width == 1 && length == y))
				ft_putchar('\\');
			else if (length > 1 && length < y && width > 1 && width < x)
				ft_putchar(' ');
			else
				ft_putchar('*');
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}
