/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 10:31:18 by tde-brit          #+#    #+#             */
/*   Updated: 2018/10/17 10:31:19 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *dst;

	if ((dst = (malloc(sizeof(void) * size))) == NULL)
		return (NULL);
	ft_memset(dst, 0, size);
	return (dst);
}
