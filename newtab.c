/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newtab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 08:37:57 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/07 18:05:55 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*newtab(int i)
{
	char *res;
	int j;
	int size;

	j = 0;
	size = i;
	i = (i * i) + i;
	res = malloc(sizeof(char) * i + 1);
	res[size] = '\n';
	while (j < i)
	{
		if (j != size)
		{
			if (res[j - 3] == '\n')
				res[j] = '\n';
			else
				res[j] = '.';
		}
		j++;
	}
	res[i] = '\0';
	return (res);
}
