/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:56:34 by mfierlaf          #+#    #+#             */
/*   Updated: 2018/12/18 09:03:17 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*fillit(char **stock, char **res, int i)
{
	int cpt;
	int check;
	int j;

	j = 0;
	check = 0;
	cpt = 0;
	while (cpt < 4)
	{
		if (isfree(res, (stock[j][cpt] + j * 10)) == 0)
			check == 1;
		cpt++;
	}
	cpt--;
	if (check != 0)
		j++;
	else
	{
		while (cpt >= 0)
		{
			res[j][(stock[j][cpt] + j * 10)] == 'A' + j;
			cpt--;
		}
	}
