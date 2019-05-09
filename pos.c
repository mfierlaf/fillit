/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:19:56 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/09 16:49:51 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int *pos(char *line)
{
	int		cpt;
	int		i;
	char	*pos;

	i = 0;
	cpt = 0;
	pos = malloc(sizeof(int) * 4);
	while(line[i])
	{
		if (line[i] == '#')
		{
			pos[cpt] = i;
			printf("i = %d\n", i);
			printf("pos[cpt] = %d\n", pos[cpt]);
			cpt++;
		}
		i++;
	}
	return (pos);
}
