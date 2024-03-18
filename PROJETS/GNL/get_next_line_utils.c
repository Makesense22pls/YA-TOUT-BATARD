/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:55 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/17 20:56:11 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_;
	unsigned char	*s_;

	c_ = (unsigned char)c;
	s_ = (unsigned char *)s;
	if (s == NULL)
		return (NULL);
	if (c_ == '\0')
	{
		while (*s_ != '\0')
			s_++;
		return ((char *)(s_));
	}
	while (*s_ != '\0')
	{
		if (*s_ == c_)
			return ((char *)(s_));
		s_++;
	}
	return (0);
}

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	len = ft_strlen(src);
	if (!src)
		return (0);
	i = 0;
	while (*src != '\0' && (i + 1 < dstsize))
	{
		*dst++ = *src++;
		i++;
	}
	if (dstsize > 0)
	{
		*dst = '\0';
	}
	return (len);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	if (!src)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (dst[i])
		i++;
	while (*src != '\0' && (i < dstsize - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	if (dstsize < i)
		return (dstsize + src_len);
	return (src_len + dst_len);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copie;

	copie = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!copie)
		return (0);
	ft_strlcpy(copie, s1, (ft_strlen(s1) + ft_strlen(s2)) + 1);
	ft_strlcat(copie, s2, (ft_strlen(s1) + ft_strlen(s2)) + 1);
	return (copie);
}
