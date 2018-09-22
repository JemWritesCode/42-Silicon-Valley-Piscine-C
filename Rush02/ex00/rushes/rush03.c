/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 17:13:34 by akali             #+#    #+#             */
/*   Updated: 2018/07/28 17:13:36 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row1(int col, int x)
{
	if (col == 1)
		ft_putchar('A');
	else if (col > 1 && col < x)
		ft_putchar('B');
	else
		ft_putchar('C');
}

void	ft_print_row2(int col, int x)
{
	if (col == 1)
		ft_putchar('B');
	else if (col > 1 && col < x)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	ft_print_row3(int col, int x)
{
	if (col == 1)
		ft_putchar('A');
	else if (col > 1 && col < x)
		ft_putchar('B');
	else
		ft_putchar('C');
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
				ft_print_row1(col, x);
			}
			else if (row < y)
			{
				ft_print_row2(col, x);
			}
			else
			{
				ft_print_row3(col, x);
			}
		}
		ft_putchar('\n');
		col = 0;
	}
}
