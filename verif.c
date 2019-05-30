/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-brit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:15:05 by tde-brit          #+#    #+#             */
/*   Updated: 2019/05/30 15:15:18 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	occurence(char *line, int n, int j)
{
	while (n < 20)
	{
		while (line[n] != '\0' && line[n] != '\n')
		{
			if (line[n] != '.' && line[n] != '#')
				return (0);
			if (line[n] == '#')
			{
				if (n != 21 && line[n] == line[n + 1])
					j++;
				if (n != 0 && line[n] == line[n - 1])
					j++;
				if (n >= 5 && line[n] == line[n - 5])
					j++;
				if (n <= 15 && line[n] == line[n + 5])
					j++;
			}
			n++;
		}
		n++;
	}
	return (j);
}

int	ligne(char *line)
{
	int i;
	int k;
	int n;

	k = 0;
	n = 0;
	while (n < 20)
	{
		i = 0;
		while (line[n] != '\0' && line[n] != '\n')
		{
			n++;
			i++;
		}
		n++;
		k++;
	}
	if (i != 4 || k != 4)
		return (0);
	return (1);
}

int	compteur(char *line, int n)
{
	int cpt;

	cpt = 0;
	while (n < 20)
	{
		while (line[n] != '\0' && line[n] != '\n')
		{
			if (line[n] == '#')
				cpt++;
			n++;
		}
		n++;
	}
	if (cpt != 4)
		return (0);
	return (1);
}

int	verif(char *line)
{
	int j;
	int n;

	j = 0;
	n = 0;
	if (line[20] != '\0' && line[20] != '\n')
		return (0);
	if (compteur(line, n) != 1)
		return (0);
	if (ligne(line) != 1)
		return (0);
	j = occurence(line, n, j);
	if (j == 6 || j == 8)
		return (1);
	else
		return (0);
}
