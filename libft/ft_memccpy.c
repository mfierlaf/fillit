/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 10:37:40 by tde-brit          #+#    #+#             */
/*   Updated: 2018/10/10 10:37:41 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	unsigned int	i;
	unsigned char	cc;

	if (dst == src && n == 0)
		return (dst);
	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	cc = (unsigned char)c;
	while (i < n)
	{
		pdst[i] = psrc[i];
		if (pdst[i] == cc)
			return (pdst + i + 1);
		i++;
	}
	return (NULL);
}
