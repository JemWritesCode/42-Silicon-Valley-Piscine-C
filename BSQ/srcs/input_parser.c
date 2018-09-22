 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:54:29 by vakumar           #+#    #+#             */
/*   Updated: 2018/08/13 19:54:27 by vakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/bsq.h"

#define BUF_SIZE 4096

char	**parse_input(int *lines, int *length, char *buf)
{
	char	**res;
	int		i;
	int		j;
	int		b;

	b = 0;
	i = 0;
	res = (char **)malloc(sizeof(char *) * (*lines + 1));
	res[*lines] = 0;
	while (buf[b])
	{
		j = 0;
		res[i] = (char *)malloc(sizeof(char) * (*length + 1));
		while (buf[b] != '\n' && buf[b])
			res[i][j++] = buf[b++];
		res[i++][j] = '\0';
		b++;
	}
	free(buf);
	return (res);
}

void	input_dimensions(int *lines, int *length, char *buf)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (buf[i])
	{
		j++;
		if (buf[i++] == '\n')
		{
			(*lines)++;
			if (j - 1 > *length)
				(*length) = j - 1;
			j = 0;
		}
	}
	if (*lines == 0)
		*length = j;
}

char	**input_parser(int *width, int *height)
{
	char	*buf;
	char	ch;
	int		i;

	i = 0;
	*width = 0;
	*height = 0;
	buf = (char *)malloc(BUF_SIZE);
	while (read(0, &ch, 1) > 0)
		buf[i++] = ch;
	buf[i] = '\0';
	input_dimensions(height, width, buf);
	return (parse_input(height, width, buf));
}
