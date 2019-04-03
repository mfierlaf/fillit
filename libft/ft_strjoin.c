/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 10:33:49 by tde-brit          #+#    #+#             */
/*   Updated: 2018/10/17 10:33:49 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*dst;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = 0;
	if ((dst = (malloc(sizeof(char) * (i + j + 1)))) == NULL)
		return (NULL);
	while (k < i)
	{
		dst[k] = s1[k];
		k++;
	}
	while (k < j + i)
	{
		dst[k] = s2[k - i];
		k++;
	}
	dst[k] = '\0';
	return (dst);
}
