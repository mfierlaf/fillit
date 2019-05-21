/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:27:41 by tde-brit          #+#    #+#             */
/*   Updated: 2019/05/09 16:33:38 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char **switchbasemain(char **tetro)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (tetro[k])
	{
		i = 0;
		while (i < 4)
		{
			if (tetro[k][i] > 4)
			{
				tetro[k][i] -= 4;
				tetro[k][i] += 2;
			}
			i++;
		}
		k++;
	}
	return (tetro);
}

int	main(int argc, char **argv)
{
	char	**tab;
	char	*map;
	int 	size;
	int		check;

	check = 0;
	map = NULL;
	if (argc != 2)
		return (0);
	if ((tab = tetrominos(argv)) == NULL)
		return (0);
	size = start_size(tab);
	printf("apres stat_size\n");
	
	
		tab = switchbase(tab, 4, size);
		check = 1;
	
	printf("apres switchbasemain\n");
	map = fillit(tab, map, size, check);
	ft_putstr(map);
	free(map);
	return (0);
}
