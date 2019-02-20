/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainsetable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:53:57 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/02/20 11:39:34 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int *setmin(int *pos);
int *pos(char *line);
char *newtab(int i);
int	issetable(char *res, int *tetro, int pos); 
int	*switchbase(int *tetro, int size);

int	main(void)
{
	int i;
	int fd;
	char line[21];
	int *tab;
	char *res;
	int size;

	size = 9;
	i = 0;
	res = newtab(size);
	fd = open("map", O_RDONLY);
	read(fd, line, 21);
	tab = pos(line);
	while (i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	tab = setmin(tab);
	while (i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf ("\n");
	tab = switchbase(tab, size);
	i = 0;
	while (i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("\n");
	i = issetable(res, tab, 5);
	printf("%d\n", i);
	return (0);
}
