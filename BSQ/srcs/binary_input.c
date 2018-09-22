/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 19:02:39 by jcope             #+#    #+#             */
/*   Updated: 2018/08/15 19:02:39 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/bsq.h"

int *read_title(char *str)
{
	int numb_lines_map;
	char empty_char;
	char obst;
	char full;

	if (count_col(str) >= 4)
	{
		numb_lines_map = ft_atoi(&str[0]); // need to check this is a number
		// need to check that this number matches the columns of box with no title line.
		empty_char = str[1];
		obst = str[2];
		full = str[3];
		return (get_only_string(str, empty_char, obst));
	}
	else
	{
		write(1,"map error",9);
		return (0);
	}
}

int	*get_only_string(char *str, char empty_char, char obst)
{
	char *newstring;
	int i;
	int i2;
	int len;

	
	newstring = (char*)malloc(sizeof(*str) * (ft_strlen(str) + 1));
	i = 0;
	i2 = 0;

	while (str[i] != '\n')
		i++;
	i++;
	while(str[i] != '\0')
	{
		newstring[i2] = str[i];
		i++;
		i2++;
	}
	len = ft_strlen(newstring);
	return(make_binary_string(newstring, empty_char, obst, len));

}

int	*make_binary_string(char *newstring, char empty_char, char obst, int strlen)
{
	int i;
	int i2;
	int *binary_string;

	i = 0;
	i2 = 0;
	binary_string = (int*)malloc(sizeof(*newstring) * (strlen + 1));
	while(i < strlen)
	{
			if (newstring[i] == empty_char)
			{
				binary_string[i2] = 1;
				i2++;
			}
			else if (newstring[i] == obst)
			{
				binary_string[i2] = 0;
				i2++;					
			}
		i++;
	}

	int i3; //testing
	i3 = 0;
	while(i3 < strlen)
	{ //testing only
			printf("%d ", binary_string[i3]);
			i3++;
	}
	return(binary_string);
}