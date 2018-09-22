/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 20:50:18 by jcope             #+#    #+#             */
/*   Updated: 2018/07/28 21:27:15 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0 || nb == 0)
	{
		return (0);
	}
	else if (power == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
