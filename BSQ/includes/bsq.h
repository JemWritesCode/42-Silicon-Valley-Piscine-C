/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 19:53:16 by vakumar           #+#    #+#             */
/*   Updated: 2018/08/13 19:53:22 by vakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
#include <stdio.h> // for printf. testing only. remove this.

typedef struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;

t_list				*list_create_elem(char c);

int					list_size(t_list *list);

t_list		*get_input(char *filename);

void				list_insert_element(t_list **list, char c);

t_list				*list_create_elem(char c);

char	*create_char_string(t_list *list);

int		count_row(char *out);

int		count_col(char *out);

int		ft_atoi(char *str);

int *read_title(char *str);

int	*get_only_string(char *str, char empty_char, char obst);

int	*make_binary_string(char *newstring, char empty_char, char obst, int strlen);

int		ft_strlen(char *str);
#endif
