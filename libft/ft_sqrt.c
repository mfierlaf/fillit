/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 17:01:15 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/07 17:05:34 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= nb/2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
