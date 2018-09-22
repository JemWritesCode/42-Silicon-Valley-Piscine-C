/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 22:41:40 by jcope             #+#    #+#             */
/*   Updated: 2018/07/28 23:40:47 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nt ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1) 
	{
		return (1);
	}
	else
	{
		return (ft_fibonaci(index -1) + ft_fibonacci(index -2));
	}
	
}
