/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 17:13:07 by akali             #+#    #+#             */
/*   Updated: 2018/07/28 17:13:12 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row1(int col, int x)
{
	if (col == 1)
		ft_putchar('/');
	else if (col > 1 && col < x)
		ft_putchar('*');
	else
		ft_putchar('\\');
}

void	ft_print_row2(int col, int x)
{
	if (col == 1)
		ft_putchar('*');
	else if (col > 1 && col < x)
		ft_putchar(' ');
	else
		ft_putchar('*');
}

void	ft_print_row3(int col, int x)
{
	if (col == 1)
		ft_putchar('\\');
	else if (col > 1 && col < x)
		ft_putchar('*');
	else
		ft_putchar('/');
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
