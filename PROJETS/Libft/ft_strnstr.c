/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 23:13:07 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/20 12:01:08 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	char *haystack_;
	size_t	i;
	size_t	j;

	haystack_ = (char*) haystack;
	i = 0;
	if (haystack_ == needle)
		return (haystack_);
	if(needle[0] == '\0')
		return (haystack_);
	if (haystack_[0] == '\0' && needle[0] == '\0')
		return (haystack_);
	while (haystack_[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack_[i + j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0' && i + j <= len )
		{
			return (haystack_ + i);
		}
		i++;
	}
	return (NULL);
}
// int	main()
// {
// 	printf("Oe:%s\n", ft_strnstr("HEWLLOWORLDIOIOI", "WO", 7));
// 	printf("Oererwerw:%s\n", strnstr("HEWLLOWORLDIOIOI", "WO", 7));
// }

// char	*ft_strstr(char *str, char *to_find)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	if (str[0] == '\0' && to_find[0] == '\0')
// 		return (str);
// 	if (str[0] == '\0')
// 		return (NULL);
// 	while (str[i] != '\0')
// 	{
// 		j = 0;
// 		while (to_find[j] == str[i + j] && to_find[j] != '\0')
// 		{
// 			j++;
// 		}
// 		if (to_find[j] == '\0')
// 		{
// 			return (str + i);
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }
