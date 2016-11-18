/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:49:42 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/18 10:42:55 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_checktetri(char *str)
{
  int i;
  int j;
  int count;

  count = 1;
  j = 0;
  i = 0;
  while (str[j] != '#' && j < 20)
    j++;
  i = j + 1;
  while (i < 20)
  {
    if (str[i] == '#')
    {
      count++;
      if (str[i - 1] != '#' && str[i - 5] != '#')
          return (0);
    }
    i++;
  }
  if (count != 4)
    return (0);
  return (1);
}
