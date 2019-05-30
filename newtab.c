/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newtab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 08:37:57 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/28 14:59:57 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*newtab(int i)
{
	char	*res;
	int		j;
	int		size;

	j = 0;
	size = i;
	i = (i * i) + i;
	if ((res = malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	while (j < i)
	{
		if (j % (size + 1) == size)
			res[j] = '\n';
		else
			res[j] = '.';
		j++;
	}
	res[i] = '\0';
	return (res);
}
