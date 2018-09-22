/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:14:32 by jcope             #+#    #+#             */
/*   Updated: 2018/08/03 15:20:47 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_a_or_p(int hour)
{
	if (hour < 12)
		return ('A');
	else
		return ('P');
}

void	ft_takes_place(int hour)
{
	if (hour < 0 || hour > 23)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d:00", (hour % 12 == 0) ? 12 : hour % 12);
	printf(" %c.M.", ft_a_or_p(hour));
	hour++;
	printf(" AND %d:00", (hour % 12 == 0) ? 12 : hour % 12);
	printf(" %c.M.\n", ft_a_or_p(hour));
}
