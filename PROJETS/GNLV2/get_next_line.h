/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:59 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/25 20:11:53 by mafourni         ###   ########.fr       */
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
# define BUFFER_SIZE 10
#endif

typedef struct s_data
{
	size_t i;
	size_t debut;
	size_t end;
	size_t len;
}	t_data;


void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const	char *s);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char	*s1, char	*s2);
char 	*read_fd(int fd, char *keep_line, char *buffer_clean);
char	*get_that_line(char *stash);
char	*ft_strtrim(char	*s/*, char const	*set*/);
// int		ft_sameoupas(char const c, char const *set);

#endif
