/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:56:14 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/28 15:03:14 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	solve(char **tetrominos, char letter, char *map, int size)
{
	int i;

	i = 0;
	if (*tetrominos == NULL)
		return (1);
	while (map[i])
	{
		if (issetable(*tetrominos, map, i, size) == 1)
		{
			set(*tetrominos, letter, map, i);
			if ((solve(tetrominos + 1, letter + 1, map, size)) == 1)
				return (1);
			else
				unset(letter, map);
		}
		i++;
	}
	return (0);
}
