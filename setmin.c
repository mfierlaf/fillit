/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setmin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:21:20 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/30 15:31:51 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	first(char *pos, int minmod, int i)
{
	while (pos[0] >= 5)
	{
		pos[0] -= 5;
		i++;
	}
	while (minmod > 0)
	{
		pos[minmod] -= (i * 5);
		minmod--;
	}
	i = 1;
	minmod = pos[0];
	while (i < 4)
	{
		if (minmod % 5 > pos[i] % 5)
			minmod = pos[i];
		i++;
	}
	return (minmod);
}

char		*setmin(char *pos)
{
	int i;
	int minmod;

	minmod = 3;
	i = 0;
	minmod = first(pos, minmod, i);
	i = 0;
	while (minmod % 5 > 0)
	{
		minmod--;
		i++;
	}
	minmod = 0;
	while (minmod < 4)
	{
		pos[minmod] -= (i * 1);
		minmod++;
	}
	return (pos);
}
