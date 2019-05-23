/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:27:41 by tde-brit          #+#    #+#             */
/*   Updated: 2019/05/23 15:33:37 by tde-brit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	**tab;
	char	*map;
	int 	size;

	if (argc != 2)
		return (0);
	if ((tab = tetrominos(argv)) == NULL)
		return (0);
	size = start_size(tab);
	map = newtab(size);
	printf("apres stat_size\n");
	tab = switchbase(tab, 4, size);
	printf("apres switchbasemain\n");
	if ((map = fillit(tab, map, size, 1)) == NULL)
	{
		ft_putstr("error");
		return (0);
	}
	ft_putstr(map);
	free(map);
	map = NULL;
	return (0);
}
