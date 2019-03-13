/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrominos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:03:24 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/03/13 15:42:30 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int **tetrominos(char argv[1])
{
	int **tab;
	int cpt;
	int ret;
	int fd;
	char *line;

	cpt = 0;
	fd = open(argv[1] , O_RDONLY);
	if ((tab = malloc(sizeof(int*) * 26)) == NULL)
		return (NULL);
	while ((ret = read(fd, line, 21) == 21))
	{
		if (test(line) == 0)
			return (NULL);
		if ((tab[cpt] = malloc(sizeof(int*) * 4)) == NULL)
			return (NULL);
		tab[cpt] = setmin(line);
		cpt++;
	}
	if (cpt > 26)
		return (NULL);
	if (ret != 0)
		return (NULL);
	return(tab);
}
