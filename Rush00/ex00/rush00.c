/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 19:42:36 by jcope             #+#    #+#             */
/*   Updated: 2018/07/29 20:11:52 by jcope            ###   ########.fr       */
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
			if ((length == 1 || length == y) && width == 1)
				ft_putchar('o');
			else if ((length == 1 || length == y) && width == x)
				ft_putchar('o');
			else if (length > 1 && length < y && width > 1 && width < x)
				ft_putchar(' ');
			else if ((width == 1 || width == x) && (length > 1 || length < y))
				ft_putchar('|');
			else
				ft_putchar('-');
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}
