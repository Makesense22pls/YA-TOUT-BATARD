/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:59 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/17 21:08:19 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 3
#endif

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
// char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlen(const	char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*read_fd(int fd, char *buffer);
char	*get_line(char *stash);
char	*ft_strtrim(char const	*s/*, char const	*set*/);
// int		ft_sameoupas(char const c, char const *set);

#endif
