/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 20:02:21 by vakumar           #+#    #+#             */
/*   Updated: 2018/08/13 20:02:44 by vakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"


int		ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int		ft_min(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return (a);
		else
			return (c);
	}
	else
	{
		if (b < c)
			return (b);
		else
			return (c);
	}
}

int		count_row(char *out)
{
	int row;
	int i;

	i = 0;
	row = 0;
	while (out[i])
	{
		if (out[i] == '\n')
			row++;
		i++;
	}
	return (row);
}

int		count_col(char *out)
{
	int col;

	col = 0;
	while (*out != '\n' && *out)
	{
		col++;
		out++;
	}
	return (col);
}