/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:19:56 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/28 15:00:29 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*pos(char *line)
{
	int		cpt;
	int		i;
	char	*pos;

	i = 0;
	cpt = 0;
	pos = malloc(sizeof(char) * 4);
	while (line[i])
	{
		if (line[i] == '#')
		{
			pos[cpt] = i;
			cpt++;
		}
		i++;
	}
	return (pos);
}
