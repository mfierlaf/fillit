/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrominos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:03:24 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/02/15 03:18:27 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **tetrominos(char *clear)
{
	char **tab;
	int cpt;
	int ret;
	int fd;
	char *line;

	cpt = 0;
	fd = open("map", O_RDONLY);
	if ((tab = malloc(sizeof(char*) * 26)) == NULL)
		return (NULL);
	while ((ret = read(fd, line, 21) == 21))
	{
		if (test(line) == 0)
			return (NULL);
		if ((tab[cpt] = malloc(sizeof(int*) * 4)) == NULL)
			return (NULL);
		tab[cpt] = clean(line);
		cpt++;
	}
	if (cpt > 26)
		return (NULL);
	if (ret != 0)
		return (NULL);
	return(tab);
}
