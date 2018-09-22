/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:08:51 by jcope             #+#    #+#             */
/*   Updated: 2018/08/14 14:08:53 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/bsq.h"

int		list_size(t_list *list)
{
	t_list	*ptr;
	int		count;

	count = 0;
	if (!list)
		return (count);
	ptr = list;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

char	*create_char_string(t_list *list)
{
	int		i;
	char	*str;
	int		list_length;
	if (!list)
		return (NULL);
	str = NULL;
	i = 0;
	list_length = list_size(list);
	str = (char *)malloc(sizeof(char) * (list_length + 1));
	while (i < list_length)
	{
		str[i] = list->data;
		list = list->next;
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_list	*list_create_elem(char c)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	node->data = c;
	node->next = NULL;
	return (node);
}

void	list_insert_element(t_list **list, char c)
{
	t_list *node;

	if (list && *list)
	{
		node = *list;
		while (node->next)
			node = node->next;
		node->next = list_create_elem(c);
	}
	else
	{
		*list = list_create_elem(c);
	}
}

t_list		*get_input(char *filename)
{
	t_list	*list;
	char	character;
	int file;

	list = NULL;
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		write(1,"map error",9);
		return (list);		
	}
	while (read(file, &character, 1) > 0)
		list_insert_element(&list, character);
	close(file);
	return (list);
}
