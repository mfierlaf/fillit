/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:31:46 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/28 14:30:16 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *fillit(char **tetrominos, int size)
{
	char * map;
	if ((map = newtab(size)) == NULL)
		return (NULL);
	//printf("apres stat_size check = %d\n", check);
	//printf("apres switchbase\n");
	//printf("apres newmap\n");
	while ((solve(tetrominos, 'A', map, size)) == 0)
	{
		free(map);
		map = NULL;
		size++;
		if ((map = newtab(size)) == NULL)
			return (NULL);
		tetrominos = switchbase(tetrominos, size -1, size);
	}
	return (map);
}
