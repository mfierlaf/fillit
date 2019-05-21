/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switchbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:30:44 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/21 17:01:03 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void switchbase(char ***tetro, int o_size, int n_size)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (o_size < n_size)
	{
		while (*tetro[k] != NULL)
		{
			i = 0;
			while (i < 4)
			{
				printf("debut boucle\n");
				printf("n_size = %d\n", n_size);
				printf("tetro = %s\n", tetro[k][i]);
				*tetro[k][i] += (*tetro[k][i] / (o_size + 1));
				i++;
			}
			k++;
		}
		o_size++;
	}
}


