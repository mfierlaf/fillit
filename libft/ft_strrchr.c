/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 10:30:40 by tde-brit          #+#    #+#             */
/*   Updated: 2018/10/17 10:30:41 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		else if (s[i + 1] == c)
			j = i + 1;
		i++;
	}
	if (j != -1)
		return ((char *)&s[j]);
	else if (c == '\0')
		return ((char *)s);
	else
		return (NULL);
}
