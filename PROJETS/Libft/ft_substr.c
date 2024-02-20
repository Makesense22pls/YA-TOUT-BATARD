/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:40:58 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/19 17:27:47 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const  *s, unsigned int start, size_t len)
{
	const char *ptr;
	char *copie;
	size_t i;
	
	i = 0;
	if(!s)
		return (NULL);
	if (!(start > ft_strlen(s)))
	{
		if (len > ft_strlen(s + start))
			{
				len = ft_strlen(s + start);
			}
		copie = malloc(sizeof(char)*(len + 1));
		if(!copie)
			return(0);
		ptr = s;
		while ((ptr[start + i]) && (i < len))
		{
			copie[i] = ptr[start + i];
			i ++;
		}
		copie[i] = '\0';
	}
	else
		return(ft_strdup(""));
	return(copie);
}
// int main()
// {
// 	const char s [] = "Maxence est con";
// 	unsigned int start = 3;
// 	size_t len = 14;
	
// 	printf("%s\n", ft_substr(s, start, len));
// }