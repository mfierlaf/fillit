/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:56:34 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/03/13 16:59:04 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*fillit(int **tetro, char *res, int size, int *pos)
{
	int cpt;
	int i;
	int k;

	cpt = 0;
	i = 0;
	k = 0;
	if (pos[2] == 0)
	{
		free(res);
		res = newtab(size);
		pos[2] = 1;
	}
	switchbase(&tetro, size);
	while (tetro[k])
	{
		if (issetable(res, tetro[k], pos[0]) == 1)
		{
			while (i < 4)
			{
				res[tetro[k][i] + pos] = k + 'A';
				i++;
			}
			i = 0;
			k++;
			pos = 0;
		}
		pos++;
		if (pos > (size * size + size))
			fillit(tetro, res, size++, pos);
	}
