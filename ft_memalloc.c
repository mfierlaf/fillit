/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:07:07 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/02/15 16:05:00 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

void	*ft_memalloc(size_t size, int c)
{
	void	*final;

	if ((final = (void*)malloc(sizeof(void) * size)) == NULL)
		return ((void*)0);
	ft_memset(final, c, size);
	return (final);
}
