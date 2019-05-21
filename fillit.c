/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:31:46 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/21 16:57:46 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *fillit(char **tetrominos, char *map, int size, int check)
{
	free(map);
	printf("apres free map\n");
	if (check == 0)
		switchbase(&tetrominos, size - 1, size);
	printf("apres stat_size check = %d\n", check);
	printf("apres switchbqse\n");
	map = newtab(size);
	printf("apres newmap\n");
	if ((solve(tetrominos, 'A', map, size)) == 0)
		fillit(tetrominos, map, size++, 0);
	return (map);
}
