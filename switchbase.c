/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switchbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:30:44 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/22 14:48:49 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char **switchbase(char **tetro, int o_size, int n_size)
{
	int i;
	int k;

	i = 0;
	k = 0;
		while (tetro[k] != NULL)
		{
			i = 0;
			while (i < 4)
			{
				printf("debut boucle\n");
				printf("i = %d\n", i);
				printf("n_size = %d\n", n_size);
				printf("o_size = %d\n", o_size);
				printf("tetro = %d\n", tetro[k][i]);
				tetro[k][i] += ((tetro[k][i] / (o_size + 1)) * (n_size - o_size));
				printf("tetro = %d\n", tetro[k][i]);
				i++;
			}
			printf("k = %d\n", k);
			k++;
		}
		return (tetro);
}


