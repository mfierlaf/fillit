/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switchbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:30:44 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/09 16:38:24 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void switchbase(char ***tetro, int size)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (*tetro[k])
	{
		i = 0;
		while (i < 4)
		{
			printf("debut boucle\n");
			printf("size = %d\n", size);
			printf("tetro = %s\n", tetro[k][i]);
			if (*tetro[k][i] > size)
			{
				printf("debut if\n");
				*tetro[k][i] -= (size - 1);
				*tetro[k][i] += size;
			}
			i++;
		}
		k++;
	}
}
