/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:31:46 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/23 15:36:36 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *fillit(char **tetrominos, char *map, int size, int check)
{
	free(map);
	map = NULL;
	if ((map = newtab(size)) == NULL)
		return (NULL);
	if (check == 0)
		tetrominos = switchbase(tetrominos, size - 1, size);
	printf("apres stat_size check = %d\n", check);
	printf("apres switchbase\n");
	printf("apres newmap\n");
	if ((solve(tetrominos, 'A', map, size)) == 0)
		fillit(tetrominos, map, size + 1, 0);
	return (map);
}
