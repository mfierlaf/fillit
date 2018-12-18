/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:07:50 by mfierlaf          #+#    #+#             */
/*   Updated: 2018/12/15 18:55:43 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "fillit.h"

char	*test(char *line)
{
	int cpt;
	char tmp[4][4];
	int i;
	int k;
	char *stock[4];

	cpt = 0;
	k = 0;
	while (line)
	{
		i = 0;
		while (*line[i] != '\0' && line[i] != '\n')
		{
			tmp[k][i] = *line[i];
			if (line[i] == CROIX)
			{
				tmp[k][i] = 'A' + j;
				cpt++;
			}
			i++;
			if (cpt > 3 || i > 4)
				return (NULL);
		}
		k++;
		if (k > 4)
			return (NULL);
		if (k = 4)
			j++;
	};
	k = 0;
	i = 0;
	cpt--;
	While (cpt >= 0 )
	{
		if(tmp[k][i] == CROIX)
		{
			stock[cpt] = (k * 10) + i;
			cpt--;
		}
		if (i == 4 && k < 4)
		{
			k++;
			i = 0;
		}
		if (i == 4 && k == 4)
		{
			j++;
			i = 0;
			k = 0;
		}
		else
			i++;
	}
	k = 0;
	while (cpt < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (stock[cpt] == (stock[i] - 10) || stock[cpt] == (stock[i] + 10) 
					|| stock[cpt] == (stock[i] - 1) || stock[cpt] == (stock[i] +1))
				k++;
			i++;
		}
		cpt++;
	}
	if (k == 6 || k == 8)
		return(stock);
	else
		return (NULL);
}

int		min(char *stock)
{
	int range;
	int i;

	i = 0;
	range = stock[i];
	while (i < 4)
	{
		if (range < stock[i])
			range = stock[i];
		i++;
	}
	return (range);
}

char	**final_stock()
{
	char 	tab[26][4];
	char	*line;
	int 	fd;
	int		i;
	int		cpt;
	int 	min;
	int ret;

	i = 0;
	line = NULL;
	fd = open(map, O_RDONLY);
	while ((ret = read(fd, line,  21)) == 21)
	{
		cpt = 0;
		tab[i] = test(line);
		min = range(tab[i]);
		while (tab[i][cpt])
		{
			tab[i][cpt] = tab[i][cpt] - range;
			cpt++;
		}
		i++;
	}
	if (ret != 21 && ret != 0)
		return (NULL);
	return (tab);
}
