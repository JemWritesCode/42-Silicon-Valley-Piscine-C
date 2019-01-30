/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 17:11:54 by akali             #+#    #+#             */
/*   Updated: 2018/08/12 00:25:21 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush_2.h"

void	ft_print_row1_00(int col, int x, char *arr, int i)
{
	if (col == 1)
		arr[i] = ('o');
	else if (col > 1 && col < x)
		arr[i] = ('-');
	else
		arr[i] = ('o');
}

void	ft_print_row2_00(int col, int x, char *arr, int i)
{
	if (col == 1)
		arr[i] = ('|');
	else if (col > 1 && col < x)
		arr[i] = (' ');
	else
		arr[i] = ('|');
}

void	ft_print_row3_00(int col, int x, char *arr, int i)
{
	if (col == 1)
		arr[i] = ('o');
	else if (col > 1 && col < x)
		arr[i] = ('-');
	else
		arr[i] = ('o');
}

char	*rush_00(int x, int y)
{
	int		row;
	int		col;
	char	*arr;
	int		i;

	i = 0;
	col = 0;
	row = 0;
	arr = malloc(sizeof(char) * (x * y));
	while (++row <= y)
	{
		while (++col <= x)
		{
			if (row == 1)
				ft_print_row1_00(col, x, arr, i++);
			else if (row < y)
				ft_print_row2_00(col, x, arr, i++);
			else
				ft_print_row3_00(col, x, arr, i++);
		}
		arr[i] = ('\n');
		i++;
		col = 0;
	}
	return (arr);
}

char	*main_00(int col, int row)
{
	return (rush_00(col, row));
}
