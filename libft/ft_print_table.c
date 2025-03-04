/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:57:29 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/21 14:17:51 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_table(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
