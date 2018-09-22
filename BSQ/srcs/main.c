/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:11:32 by jcope             #+#    #+#             */
/*   Updated: 2018/08/14 14:16:42 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/bsq.h"

int		main(int argc, char **argv)
{
	// must be able to take unlimited maps, each param is another file name. 
	t_list	*input;
	char	*original_map_string;
	//char    **original_map_matrix;
	int	*binary_map_string;

	if (argc >= 2)
	{

		input = get_input(argv[1]); // we used a linked list for allocating memory one character at a time, always precise amount.
		original_map_string = create_char_string(input);
		//original_map_matrix = create_map_matrix(original_map_string);

		binary_map_string = read_title(original_map_string);


		
	/*
	is_valid_map(original_map_matrix);
	original_map_matrix = make_matrix_binary(original_map_matrix); // turn matrix into a 0s & 1s matrix.
	solve_matrix(original_map_matrix);
	*/
		return (0);
	}
	else
	{
		write(1,"map error",9);
		// no maps were passed in the arguments. 
	}
}