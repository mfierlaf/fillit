/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:56:14 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/08 14:27:52 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int solve(char **tetrominos, char letter, char *map)
{
	int i;

	i = 0;
	if (tetrominos != NULL)
		return (1);
	while (map[i])
	{
		if (issetable(tetrominos, map[i]) == 1)
			{
				set(tetrominos);
				if (solve(tetrominos + 1, letter + 1, map) == 1)
					return (1);
				else
					unset(letter);
			}
		i++;
	}
	return (0);
}
