/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 22:25:10 by jcope             #+#    #+#             */
/*   Updated: 2018/08/02 23:42:34 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int range_size;
	int i;

	range_size = max - min;
	if (min >= max || range == NULL)
	{
		range = NULL;
		return (0);
	}
	else
	{
		i = 0;
		*range = (int*)malloc(sizeof(int) * range_size);
		while (min < max)
		{
			range[0][i] = min;
			i++;
			min++;
		}
	}
	return (range_size);
}
