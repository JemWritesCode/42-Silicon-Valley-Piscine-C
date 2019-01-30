/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:09:22 by akali             #+#    #+#             */
/*   Updated: 2018/08/12 21:41:31 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_2_H
# define RUSH_2_H
# include <stdlib.h>
# include <unistd.h>

char				*main_00(int col, int row);

char				*main_01(int col, int row);

char				*main_02(int col, int row);

char				*main_03(int col, int row);

char				*main_04(int col, int row);

int					count_row(char *out);

int					count_col(char *out);

int					if_valid_input(char *out);

void				find_rush_combos(char *str);

void				ft_putnbr(int nb);

void				ft_putchar(char c);

char				*rush_00(int x, int y);

char				*rush_01(int x, int y);

char				*rush_02(int x, int y);

char				*rush_03(int x, int y);

char				*rush_04(int x, int y);

int					ft_atoi(char *str);

typedef struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;
t_list				*list_create_elem(char c);

int					list_size(t_list *list);

t_list				*get_input();

void				list_insert_element(t_list **list, char c);

t_list				*list_create_elem(char c);

char				*create_char_string(t_list *list);

#endif
