/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rush_combo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 19:12:24 by jcope             #+#    #+#             */
/*   Updated: 2018/08/11 19:37:37 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		string_match(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s1 || *s2)
		return (0);
	return (1);
}

void	write_rush()
{
		
}



void	find_rush_combos(char *str)
{
	int rows;
	int col;
	int matches;
	
	if(string_match(*str, //need to compare to rush returnstr.))
				{
			
				}

}
