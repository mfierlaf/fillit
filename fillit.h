/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:40:53 by mfierlaf          #+#    #+#             */
/*   Updated: 2018/11/23 14:45:36 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"
int 	**tetrominos(char **argv);
int		verif(char *line);
int 	*pos(char *line);
int		*setmin(int *pos);
char	*fillit(int **tetro, char *res, int size, int *pos);
char	*newtab(int i);
void 	switchbase(int ***tetro, int size);
int 	issetable(char *res, int *tetro, int pos, int size);
#endif
