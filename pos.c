/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:19:56 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/02/19 18:53:57 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *pos(char *line)
{
	int cpt;
	int i;
	int	*pos;

	i = 0;
	cpt = 0;
	pos = malloc(sizeof(int) * 4);
	while(line[i])
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
