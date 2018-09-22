/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:08:02 by akali             #+#    #+#             */
/*   Updated: 2018/08/11 19:37:40 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"
# define buff 4096

int		main(void)
{
	int bytes;
	char in[buff + 1];

	bytes = read(0, in, buff);
	if (!bytes)
	{
		write(1, "aucune", 1);
		return (0);
	}
	if (if_valid_input(out))
	{
		find_rush_combos(in);
	}
}
