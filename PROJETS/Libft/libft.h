/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:59:43 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/20 12:02:28 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>
#include <fcntl.h>

int ft_atoi(char *str);
int	ft_strncmp(const char *s1,const char *s2, size_t n);
int	ft_isascii(int c);
int	ft_strlen(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strdup(const char *s1);
void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *s, int fd);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memset(void *b, int c, size_t len);
void *ft_memmove(void *dst,void *src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void 	*ft_memchr(const void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
void	ft_bzero(void *s, size_t n);
char *ft_strrchr(const char *s, int c);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src,size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c) ;

#endif