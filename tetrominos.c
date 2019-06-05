/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrominos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:03:24 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/06/05 18:48:24 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_tab(char **tab, int cpt)
{
	while (cpt >= 0)
	{
		free(tab[cpt]);
		cpt--;
	}
	free(tab);
	tab = NULL;
}

char	**loop(char *line, char **tab, int fd, int cpt)
{
	int ret;
	int check;

	ret = read(fd, line, 21);
	line[ret] = '\0';
	while (ret == 21 || ret == 20)
	{
		if (verif(line) == 0)
			return (NULL);
		tab[cpt] = pos(line);
		tab[cpt] = setmin(tab[cpt]);
		cpt++;
		if (cpt > 26)
		{
			free_tab(tab, cpt);
			return (NULL);
		}
		if (ret == 20)
			check = 1;
		ret = read(fd, line, 21);
		line[ret] = '\0';
	}
	if (ret != 0 || check != 1)
		return (NULL);
	return (tab);
}

char	**tetrominos(char **argv)
{
	char	**tab;
	int		cpt;
	int		fd;
	char	line[20];

	cpt = 0;
	fd = open(argv[1], O_RDONLY);
	if ((tab = malloc(sizeof(char*) * 27)) == NULL)
		return (NULL);
	while (cpt <= 26)
	{
		tab[cpt] = NULL;
		cpt++;
	}
	cpt = 0;
	if ((tab = loop(line, tab, fd, cpt)) == NULL)
		return (NULL);
	return (tab);
}
