/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issetable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:21:48 by tde-brit          #+#    #+#             */
/*   Updated: 2019/05/07 18:01:22 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int issetable(char *res, char *tetro, int pos, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (tetro[i] + pos > (size * size + size))
				return (0);
		if (res[tetro[i] + pos] != '.')
			j++;
		i++;
	}
	printf("j = %d\n", j); 
	if (j == 4)
		return (1);
	else
		return (0);
}
