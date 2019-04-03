/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 12:03:23 by tde-brit          #+#    #+#             */
/*   Updated: 2018/10/15 10:37:52 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(int n)
{
	int count;

	count = 0;
	if (n < 0)
		count++;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*dst;

	nb = (long)n;
	i = ft_count(nb);
	if ((dst = (char *)(malloc(sizeof(char) * (i + 2)))) == NULL)
		return (NULL);
	dst[i + 1] = '\0';
	if (nb < 0)
	{
		dst[0] = '-';
		nb = nb * -1;
	}
	if (nb == 0 || nb == -0)
		dst[0] = '0';
	while (nb > 0)
	{
		dst[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	return (dst);
}
