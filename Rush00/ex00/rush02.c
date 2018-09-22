/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 20:14:31 by jcope             #+#    #+#             */
/*   Updated: 2018/07/29 20:18:52 by jcope            ###   ########.fr       */
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
			if (length == 1 && (width == 1 || width == y))
				ft_putchar('A');
			else if (length == y && (width == 1 || width == y))
				ft_putchar('C');
			else if (length > 1 && length < y && width > 1 && width < x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}
