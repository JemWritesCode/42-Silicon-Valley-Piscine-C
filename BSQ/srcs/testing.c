/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 18:30:31 by jcope             #+#    #+#             */
/*   Updated: 2018/08/14 18:30:32 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// KEEP FOR TESTING, BUT DONT PUSH. 
#include "../includes/bsq.h"

void	print_matrix(char **matrix, int cols, int rows){
	int i, j;
	for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}