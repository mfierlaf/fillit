/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:59:44 by tde-brit          #+#    #+#             */
/*   Updated: 2018/10/10 16:01:56 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	int		sign;
	long	of;

	res = 0;
	sign = 1;
	while ((*str == '\n') || (*str == '\t') || (*str == '\v') ||
			(*str == ' ') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		of = res;
		res = res * 10 + *str - '0';
		if (of != 0 && ((of ^ res) < 0) && sign == -1)
			return (0);
		if (of != 0 && ((of ^ res) < 0) && sign == 1)
			return (-1);
		str++;
	}
	return (sign * (int)res);
}
