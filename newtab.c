/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newtab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 08:37:57 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/22 17:19:55 by tde-brit         ###   ########.fr       */
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
		if(j % (size + 1) == size)
			res[j] = '\n';
		else
			res[j] = '.';
		j++;
	}
	res[i] = '\0';
	return (res);
}
