/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 10:34:06 by tde-brit          #+#    #+#             */
/*   Updated: 2018/10/28 20:04:11 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cnt_parts(const char *s, char c)
{
	int		cnt;
	int		in_substring;

	in_substring = 0;
	cnt = 0;
	while (*s != '\0')
	{
		if (in_substring == 1 && *s == c)
			in_substring = 0;
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static int	ft_wlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**dst;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	i = ft_cnt_parts((char const *)s, c);
	j = 0;
	if ((dst = (char **)(malloc(sizeof(*dst) * (i + 1)))) == NULL)
		return (NULL);
	while (i > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		dst[j] = ft_strsub((char const *)s, 0, ft_wlen((char const *)s, c));
		if (dst[j] == NULL)
			return (ft_freechararray(&dst[j], j));
		s = s + ft_wlen(s, c);
		j++;
		i--;
	}
	dst[j] = 0;
	return (dst);
}
