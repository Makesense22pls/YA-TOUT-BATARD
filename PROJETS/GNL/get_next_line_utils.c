/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:55 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/13 17:44:59 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_;
	unsigned char	*s_;

	c_ = (unsigned char) c;
	s_ = (unsigned char *) s;
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

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*copie;

	if (!s1)
		return (0);
	len = 0;
	i = 0;
	while (s1[len])
		len++;
	copie = malloc(sizeof(char) * (len + 1));
	if (!copie)
		return (0);
	while (i < len)
	{
		copie[i] = s1[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}

