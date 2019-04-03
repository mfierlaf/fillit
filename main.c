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

int	main(int argc, char **argv)
{
	int	**tab;
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
	res = fillit(tab, res, 2, pos);
	ft_putstr(res);
	return (0);
}
