/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:06:14 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/09 16:27:03 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	set(char *tetrominos, char letter, char *map,int pos)
{
	int i;

	i = 0;
	while (i < 4)
	{
		map[pos + tetrominos[i]] = letter;
		i++;
	}
}
