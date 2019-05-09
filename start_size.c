/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 16:37:59 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/09 15:24:38 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int start_size(char **tetrominos)
{
	int i;

	i = 0;
	while (tetrominos[i] != NULL)
		i++;
	i = i * 4;
	i = ft_sqrt(i);
	return (i);
}
