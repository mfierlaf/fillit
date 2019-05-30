/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:27:41 by tde-brit          #+#    #+#             */
/*   Updated: 2019/05/28 15:10:32 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	**tab;
	int		size;
	char	*res;

	if (argc != 2)
		return (0);
	if ((tab = tetrominos(argv)) == NULL)
	{
		ft_putstr("error");
		return (0);
	}
	size = start_size(tab);
	tab = switchbase(tab, 4, size);
	if ((res = fillit(tab, size)) == NULL)
	{
		ft_putstr("error");
		return (0);
	}
	ft_putstr(res);
	free(res);
	res = NULL;
	return (0);
}
