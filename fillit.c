/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:56:34 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/02/04 19:30:21 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*fillit(char **stock, char **res, int i)
{
	int cpt;
	int check;
	int size;

	check = 0;
	cpt = 0;
	size = 2;
	while (cpt < 4)
	{
		if (isfree(res, (stock[i][cpt] + i)) == 0)
			check == 1;
		cpt++;
	}
	cpt--;
	if (check == 0)
	{
		while (cpt >= 0)
		{
			res[i][(stock[i][cpt] + i)] == 'A' + i;
			cpt--;
		}
	}
	i++;
