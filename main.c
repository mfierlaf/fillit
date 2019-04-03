/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:27:41 by tde-brit          #+#    #+#             */
/*   Updated: 2019/04/03 14:28:21 by tde-brit         ###   ########.fr       */
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
	int	*pos;
	char *res;

	res = newtab(2);
	if ((pos = malloc(sizeof(int) * 3)) == NULL)
		return (0);
	pos[0] = 0;
	pos[1] = 0;
	pos[2] = 1;
	if (argc != 2)
		return (0);
	if ((tab = tetrominos(argv)) == NULL)
		return (0);
	tab = switchbasemain(tab);
	res = fillit(tab, res, 2, pos);
	ft_putstr(res);
	return (0);
}
