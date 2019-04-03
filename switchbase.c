/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switchbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:30:44 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/03/13 16:08:33 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void switchbase(int ***tetro, int size)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (*tetro[k])
	{
		while (i < 4)
		{
			if (*tetro[k][i] > size)
			{
				*tetro[k][i] -= (size - 1);
				*tetro[k][i] += size;
			}
			i++;
		}
		k++;
	}
}
