/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 08:45:47 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/02/04 14:54:06 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nclude "libft.h"

void	*ft_memalloc(size_t size, int c)
{
	void	*final;

	if ((final = (void*)malloc(sizeof(void) * size)) == NULL)
		return ((void*)0);
	ft_memset(final, c, size);
	return (final);
}
