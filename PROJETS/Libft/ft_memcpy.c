/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:41:57 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/16 14:35:12 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memcpy(void *dst, const void *restrict src, size_t n)
{
	unsigned char *dst_;
	unsigned char *src_;

	dst_ = (unsigned char*)dst;
	src_ = (unsigned char*)src;

	if (!dst || !src)
		return(NULL);
	while(n--)
	{
		*dst_++ = *src_++;
	}
	return (dst);
}
// int main()
// {
// 	char dst [] = "world Heloo";
// 	char src [] = "WESH";
// 	printf("%s\n", ft_memcpy(dst, src, 3));
// 	printf("%s\n", memcpy(dst, src, 3));
// 	return (0);
// }
// void *ft_memcpy(void *dst, const void *restrict src, size_t n)
// {
// 	unsigned int i;
// 	unsigned char *char_dst;
// 	unsigned char *char_src; 

// 	i = 0;
// 	char_src = (unsigned char *) src;
// 	char_dst = (unsigned char *) dst;
// 	if(!dst || !src)
// 		return (0);
// 	i = 0;
// 	while (i < n)
// 	{
// 		char_dst[i] = char_src[i];
// 		i++;
// 	}
// 	return (dst);
// }










































