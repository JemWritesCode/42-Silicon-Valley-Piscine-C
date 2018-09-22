/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 19:41:18 by jcope             #+#    #+#             */
/*   Updated: 2018/08/07 22:53:17 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int(*f)(int))
{
	while (length >= 0)
	{
		tab[length] = (*f)(tab[length]);
		length--;
	}
	return (tab);
}