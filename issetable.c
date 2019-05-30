/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issetable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:21:48 by tde-brit          #+#    #+#             */
/*   Updated: 2019/05/28 14:58:09 by tde-brit         ###   ########.fr       */
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
		if (map[tetro[i] + pos] == '.')
			j++;
		i++;
	}
	if (j == 4)
		return (1);
	else
		return (0);
}
