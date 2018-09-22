/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:56:13 by vakumar           #+#    #+#             */
/*   Updated: 2018/08/14 13:37:03 by vakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include "../includes/bsq.h"
/* comment out for testing. 
type def Square
{
    public int maximalSquare(char[][] matrix)
   	{
		int i;
		int j;
		int temp;

		temp = dp[j];
        int rows = matrix.length
		  	cols = rows > 0 ? matrix[0].length : 0;
        int[] dp = new int[cols + 1];
        int maxsqlen = 0, prev = 0;
        
		i = 1;
		while (i <= row) 
			i++;
			j = 1;
			while  (j <= cols)
			{
				if (matrix[i - 1][j - 1] == '1')
			   	{
                    dp[j] = Math.min(Math.min(dp[j - 1], prev), dp[j]) + 1;
                    maxsqlen = Math.max(maxsqlen, dp[j]);
                } 
				else
                    dp[j] = 0;
                
				prev = temp;
				j++;
            }
        }
        return maxsqlen * maxsqlen;
    }
}      

*/