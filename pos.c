/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:19:56 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/04/02 16:52:04 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char *pos(char *line)
{
	int		cpt;
	int		i;
	char	*pos;

	i = 0;
	cpt = 0;
	pos = malloc(sizeof(char) * 5);
	while(line[i])
	{
		if (line[i] == '#')
		{
			pos[cpt] = i;
			cpt++;
		}
		i++;
	}
	pos[4] = 125;
	return (pos);
}
