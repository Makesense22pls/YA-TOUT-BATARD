/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:55 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/26 20:04:35 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*char_dst;
	unsigned char	*char_src;

	char_dst = (unsigned char *) dst;
	char_src = (unsigned char *) src;
	if (!dst || !src)
		return (0);
	if (char_dst <= char_src)
	{
		while (len--)
		{
			*char_dst++ = *char_src++;
		}
	}
	else
	{
		while (len--)
		{
			char_dst[len] = char_src[len];
		}
	}
	return (dst);
}

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
			return (s_++, (char *)(s_));
		s_++;
	}
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	if (!src || !dst || !src)
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
	while (s[i] && s != NULL)
		i++;
	return (i);
}

char	*ft_strjoin(char	*s1, char	*s2)
{
	// free(s1);
	char	*copie;

	copie = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!copie)
		return (0);
	ft_strlcpy(copie, s1, (ft_strlen(s1) + ft_strlen(s2)) + 1);
	ft_strlcat(copie, s2, (ft_strlen(s1) + ft_strlen(s2)) + 1);
	return (copie);
}

char	*ft_strdup(const char *s1)
{
	char		*result;
	size_t		length;
	size_t		i;

	if (s1 == NULL)
		return(NULL);
	length = ft_strlen (s1);
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*s_;
	unsigned char		c_;
	int					i;

	i = 0;
	c_ = (unsigned char) c;
	s_ = (const unsigned char *) s;
	if (!s)
		return (NULL);
	if (c_ == '\0')
	{
		while (s_[i] != '\0')
			i++;
		return ((char *)(s_ + i));
	}
	while (s_[i] != '\0')
		i++;
	while (--i > -1)
	{
		if (s_[i] == c_)
			return ((char *)(s_ + i));
	}
	return (0);
}

// int main()
// {
// 	char *temp;

// 	if (ft_strrchr("Salut\nici", '\n') != 0)
// 		{
// 			temp = ft_strrchr("Salut\nici", '\n');
// 			printf("%s",temp);
// 		}
// 	else
// 		return 0;
// }