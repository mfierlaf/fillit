/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switchbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:30:44 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/28 15:08:24 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**switchbase(char **tetro, int o_size, int n_size)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (tetro[k])
	{
		i = 0;
		while (i < 4)
		{
			tetro[k][i] += ((tetro[k][i] / (o_size + 1)) * (n_size - o_size));
			i++;
		}
		k++;
	}
	return (tetro);
}
