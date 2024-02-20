/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:01:57 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/16 16:51:47 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	unsigned char *s_;
	unsigned char c_;
	int i;

	i = 0;
	c_ = (unsigned char )c;
	s_ = (unsigned char *)s;

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
	while(*s_)
	{
		s_++;
		i++;
	}
	while(i >= -1)
	{
		if(*s_ == c_)
			return(char*)(s_);
		s_--;
		i--;
	}
	return(0);
}

// int main()
// {
// 	char s [] = "Hello World";
// 	printf("%s\n", ft_strrchr(s, 'H'));
// 	printf("%s\n", strrchr(s, 'H'));
// 	return (0);
// }