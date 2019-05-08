/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:31:46 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/08 15:07:21 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *fillit(char **tetrominos, char *map, int size, int check)
{
	int i;

	i = 0;
	free(map);
	if (check == 0)
	{
		while (tetrominos[i])
		{
			switchbase(tetrominos[i], size);
			i++;
		}
	}
	map = newtab(size);
	if ((solve(tetrominos, 'A', map)) == 0)
		fillit(tetrominos, map, size++, 0);
	return (1);
}
