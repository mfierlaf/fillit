/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:56:14 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/09 16:27:50 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int solve(char **tetrominos, char letter, char *map, int size)
{
	int i;

	i = 0;
	if (tetrominos != NULL)
		return (1);
	while (map[i])
	{
		if (issetable(tetrominos[i], map, i, size) == 1)
			{
				set(tetrominos[i], letter, map, i);
				if (solve(tetrominos + 1, letter + 1, map, size) == 1)
					return (1);
				else
					unset(letter, map);
			}
		i++;
	}
	return (0);
}
