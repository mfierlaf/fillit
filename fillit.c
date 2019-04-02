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

char	*fillit(int **tetro, char *res, int size, int *pos)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;

	if (pos[2] == 0)
	{
		free(res);
		res = newtab(size);
		pos[2] = 1;
	}
	switchbase(&tetro, size);
	while (tetro[pos[1][4]] == 1)
	{
		pos[1]++;
	}
	if (issetable(res, tetro[pos[1]], pos[0]) == 1)
	{
		while (i < 4)
		{
			res[tetro[pos[1]][i] + pos[0]] = pos[1] + 'A';
			i++;
		}
		tetro[pos[1][4]] = 1;
		pos[0]++;
		fillit(tetro, res, size, pos);
	}
	else if (issetable(res, tetro[pos[1]], pos[0]) == 0 && tetro[pos[1] + 1] != NULL)
	{
		pos[1]++;
		fillit(tetro,  res, size, pos);
	}
	else if (issetable(res, tetro[pos[1]], pos[0]) == 0 && pos[0]++ != NULL)
	{
		pos[0]++;
		pos[1] = 0;
		fillit(tetro, res, size, pos);
	}
	else if (issetable(res, tetro[pos[1]], pos[0]) == 0 && tetro[pos[1] + 1] == NULL &&  pos[0]++ == NULL)
	{
		pos[0] = 0;
		pos[1] = 0;
		pos[2] = 0;
		fillit(tetro, res, size++, 0);
	}
