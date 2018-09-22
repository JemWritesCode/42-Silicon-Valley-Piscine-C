/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:50:13 by jcope             #+#    #+#             */
/*   Updated: 2018/08/02 23:15:46 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
	{
		arr = NULL;
	}
	else
	{
		arr = (int*)malloc(sizeof(int) * (max - min));
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}
	return (arr);
}
