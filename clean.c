/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freetab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:34:02 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/06/05 14:43:12 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	clean(char *res, char **tetro)
{
	int i;

	i = 0;
	free(res);
	res = NULL;
	while (tetro[i])
	{
		free(tetro[i]);
		i++;
	}
	free(tetro);
	tetro = NULL;
}
