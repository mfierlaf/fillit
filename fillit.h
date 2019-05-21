/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:40:53 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/05/21 16:56:02 by tde-brit         ###   ########.fr       */
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
char 	**tetrominos(char **argv);
int		verif(char *line);
char 	*pos(char *line);
char	*setmin(char *pos);
char	*fillit(char **tetro, char *map, int size, int chec);
char	*newtab(int i);
void 	switchbase(char ***tetro, int o_size, int n_size);
int 	issetable(char *tetro, char *map, int pos, int size);
void	unset(char letter, char *map);
int		solve(char **tetrominos, char letter, char *map, int size);
void	set(char *tetrominos, char letter, char *map, int pos);
int		start_size(char **tetrominos);
#endif
