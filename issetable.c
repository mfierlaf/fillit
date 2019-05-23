/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issetable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:21:48 by tde-brit          #+#    #+#             */
/*   Updated: 2019/05/23 15:35:56 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		issetable(char *tetro, char *map, int pos, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (tetro[i] + pos > (size * size + size))
				return (0);
		printf("map[tetro[i] + pos] = %c\n", map[tetro[i] + pos]);
		printf("tetro[i] + pos = %d\n", tetro[i] + pos);
		if (map[tetro[i] + pos] == '.')
			j++;
		i++;
	}
	printf("j = %d\n", j); 
	if (j == 4)
		return (1);
	else
		return (0);
}
