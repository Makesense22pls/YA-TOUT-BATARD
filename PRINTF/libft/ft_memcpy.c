/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:41:57 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/28 18:06:48 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict	dst, const void *restrict src, size_t n)
{
	unsigned char	*dst_;
	unsigned char	*src_;

	dst_ = (unsigned char *) dst;
	src_ = (unsigned char *) src;
	// if (n == 0)
	// 	return (dst);
	if (!dst)
		return (NULL);
	while (n--)
	{
		*dst_++ = *src_++;
	}
	return (dst);
}
// int main()
// {
// 	char *dst;
// 	dst = "wsh";
// 	char *src;
// 	src = NULL;
// 	printf("%s\n", ft_memcpy(dst, src, 0));
// 	printf("%s\n", memcpy(dst, src, 0));
// 	return (0);
// }
// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t	i;
// 	if (!dest)
// 		return (NULL);
// 	i = 0;
// 	while (i < n)
// 	{
// 		((char *)dest)[i] = ((char *)src)[i];
// 		i++;
// 	}
// 	return (dest);
// }

// int main()
// {
// 	char *dst;
// 	dst = "wsh";
// 	char *src;
// 	src = NULL;
// 	printf("%s\n", ft_memcpy(dst, src, 0));
// 	printf("%s\n", memcpy(dst, src, 0));
// 	return (0);
// }