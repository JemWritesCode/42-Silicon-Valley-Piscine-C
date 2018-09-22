/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 17:11:54 by akali             #+#    #+#             */
/*   Updated: 2018/07/28 17:12:08 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row(int col, int x, char a, char b, char c)
{
	if (col == 1)
		ft_putchar(a);
	else if (col > 1 && col < x)
		ft_putchar(b);
	else
		ft_putchar(c);
}

void	rush(int x, int y)
{
	int row;
	int col;

	col = 0;
	row = 0;
	while (++row <= y)
	{
		while (++col <= x)
		{
			if (row == 1)
			{
				ft_print_row(col, x, 'o', '-', 'o');
			}
			else if (row < y)
			{
				ft_print_row2(col, x, '|', ' ', '|');
			}
			else
			{
				ft_print_row3(col, x, 'o', '-', 'o');
			}
		}
		ft_putchar('\n');
		col = 0;
	}
}
