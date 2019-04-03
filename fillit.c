/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:56:34 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/04/02 16:54:48 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*fillit(char **tetro, char *res, int size, int *pos)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;
	if (pos[2] == 0)
	{
		free(res);
		res = newtab(size);
		switchbase(&tetro, size);
		pos[2] = 1;
	}
	while ((tetro[pos[1]][4]) == 1)
	{
		pos[1]++;
	}
	if (issetable(res, tetro[pos[1]], pos[0], size) == 1)
	{
		while (i < 4)
		{
			res[tetro[pos[1]][i] + pos[0]] = pos[1] + 'A';
			i++;
		}
		tetro[pos[1]][4] = 126;
		pos[1] = 0;
		pos[0]++;
		fillit(tetro, res, size, pos);
	}
	else if (issetable(res, tetro[pos[1]], pos[0], size) == 0 &&
			tetro[pos[1] + 1] != NULL)
	{
		pos[1]++;
		fillit(tetro,  res, size, pos);
	}
	else if (issetable(res, tetro[pos[1]], pos[0], size) == 0 &&
			pos[0]++ < (size * size + size))
	{
		pos[0]++;
		pos[1] = 0;
		fillit(tetro, res, size, pos);
	}
	else if (issetable(res, tetro[pos[1]], pos[0], size) == 0 &&
			tetro[pos[1] + 1] == NULL &&  pos[0]++ == (size * size + size))
	{
		pos[0] = 0;
		pos[1] = 0;
		pos[2] = 0;
		fillit(tetro, res, size++, 0);
	}
	return (res);
}
