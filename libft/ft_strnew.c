/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 10:31:39 by tde-brit          #+#    #+#             */
/*   Updated: 2018/10/17 10:31:40 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *dst;

	if ((dst = ((char *)malloc(sizeof(char) * (size + 1)))) == NULL)
		return (NULL);
	ft_bzero(dst, size + 1);
	return (dst);
}
