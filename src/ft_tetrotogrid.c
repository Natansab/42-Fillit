/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrotogrid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:08:53 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 09:17:27 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		**ft_tetrotogrid(int **t, int nb_of_tetros, int width)
{
	int		i;
	int		id;
	
	id = 0;
	i = 0;
	while (id < nb_of_tetros)
	{
		i = 0;
		if (width > 4) 
			while (i < 4)
			{
				t[id][i] = t[id][i] + (t[id][i] / (width - 1));
				i++;
			}
		id++;
	}
	return (t);
}


/* t = tetro
 * If the grid width, without the '\n' is two. Then we remove 2 boxes for each 
 * line. We do this to be able to print a tetro with one square. 
 * Same for the grid with 3 in width.
 * If the square is larger than 4 we add the grid - 4(tetro width) times the row
 * the first row is times 0. */


