/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:25:24 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/16 16:43:39 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strchr(const char *s, int c)
// {
// 	unsigned char *s_;
// 	unsigned char c_;
// 	unsigned int i;

// 	i = 0;
// 	c_ = (unsigned char)c;
// 	s_ = (unsigned char *)s;
// 	if(!s)
// 		return (0);
// 	if (c_ == '\0')
// 	{
// 		while(s[i] != '\0')
// 			{
// 				i++;
// 			}
// 		return (char*)(s + i);
// 	}
// 	while(s[i])
// 	{
// 		if (s[i] == c_)
// 			{
// 				return (char*)(s+i);
// 			}
// 		i++;
// 	}
// 	return(0);	
// }
char *ft_strchr(const char *s, int c)
{
	unsigned char c_;
	unsigned char *s_;

	c_ = (unsigned char)c;
	s_ = (unsigned char*)s;
	
	if(!s)
		return(0);
	if (c_ == '\0')
	{
		while(*s_ != '\0')
			{
				s_++;
			}
		return (char*)(s_);
	}
	while (*s_ != '\0')
	{
		if (*s_ == c_)
			return(char*)(s_);
		s_++;
	}
	return(0);
}

// int main()
// {
// 	int c;
// 	c = 'o';
// 	printf("%s\n",ft_strchr("bonjour",c));
// 	printf("%s\n",strchr("bonjour",c));
// 	return(0);
// }