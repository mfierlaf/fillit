/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:56:34 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/02/20 11:30:30 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*fillit(char **stock, char **res, int size, int *pos)
{
	int cpt;
	int i;
	int k;
	int a;
	int b;

	cpt = 0;
	a = 0;
	b = 0;
	i = 0;
	k = 0;
	if (pos[2] == 0)
	{
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				free(res[a][b]);
				b++;
			}
			a++;
		}
		res = newtab(size);
	}
