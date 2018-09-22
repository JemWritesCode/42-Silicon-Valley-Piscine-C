/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 19:48:43 by jcope             #+#    #+#             */
/*   Updated: 2018/07/31 22:15:56 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int number;
	int sign;

	number = 0;
	sign = 1;
	while (*str == '\n' || *str == ' ' || *str == '\t' || *str == '\r' ||
			*str == '\f' || *str == '\v')
	{
		str++;
	}
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (number * sign);
}
