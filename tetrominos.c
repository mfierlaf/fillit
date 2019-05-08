/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrominos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:03:24 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/08 15:00:21 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char **tetrominos(char **argv)
{
	char **tab;
	int cpt;
	int ret;
	int fd;
	char *line;

	line = ft_strnew(20);
	cpt = 0;
	fd = open(argv[1] , O_RDONLY);
	if ((tab = malloc(sizeof(char*) * 27)) == NULL)
		return (NULL);
	while (cpt <= 26)
	{
		tab[cpt] = NULL;
		cpt++;
	}
	cpt = 0;
	ret = read(fd, line, 21);
	while (ret == 21 || ret == 20)
	{
		if (verif(line) == 0)
			return (NULL);
		tab[cpt] = pos(line);
		tab[cpt] = setmin(tab[cpt]);
		cpt++;
		if (cpt > 25)
		{
			while (cpt >= 0)
			{
				free(tab[cpt]);
				cpt--;
			}
			free(tab);
			return (NULL);
		}
		ret = read(fd, line, 21);
	}
	if (ret != 0)
		return (NULL);
	return(tab);
}
