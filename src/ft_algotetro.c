/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algotetro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:48:38 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/19 17:32:30 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "../libft/libft.h"

/* This function will print the AAAA or BBBB if we need to fit the tetro in
   the grid. If we need to erase the AAAA, erase = 1*/

char	*ft_printtetro(int **tetro, char *grid, int position, int i, int erase)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (erase)
			grid[tetro[i][k] + position] = '.';
		else
			grid[tetro[i][k] + position] = 'A' + i;
		k++;
	}
	return (grid);
}

/* ft_tetrofits is a function to determine if the tetro will fit in this
   position or if we should change position
   tab = tetro[index]
   */

int ft_tetrofits(int **tetro, char *grid, int position, int i)
{
	int k;

	k = 0;
//	ft_putstr(grid);
//	ft_putchar('\n');
	while (k < 4)
	{
		if (grid[tetro[i][k] + position] != '.')
			return (0);
		k++;
	}
	return (1);
}

int ft_algotetro(int **tetro, int i, char *grid)
{
	unsigned long  position;
	int print;

	if (i > 2)
		return (1);
	position = 0;
	while (position < strlen(grid))
	{
		print = 0;
		if (ft_tetrofits(tetro, grid, position, i))
		{
			//ft_putstr("ok\n\n");
			print = 1;
			grid = ft_printtetro(tetro, grid, position, i, 0);
			ft_putstr("\n\n");
			ft_putstr(grid);
			ft_putstr("\n\n");
			//ft_putnbr(i + 1);
			if (ft_algotetro(tetro, i + 1, grid))
				return (1);
		}
		if (print)
			grid = ft_printtetro(tetro, grid, position, i, 1);
		position++;
	}
	/*if (i = 0)
	  return (ft_algotetro(tetro[0] grid++)); */
	return (0);
}
