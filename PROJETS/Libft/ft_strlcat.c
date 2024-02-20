/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:10:15 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/18 18:16:27 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
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
	{
		dst[i] = '\0';
	}
	if (dstsize < i)
		{
			return (dstsize + src_len);
		}
	return (src_len + dst_len);
}

// int	main()
// {
// 	char dst[10] = "t";
// 	char src[10] = "estb";
// 	char dst1[10] = "t";
// 	char src1[10] = "estb";
// 	int n = 4;
// 	printf("%zu\n", ft_strlcat(dst, src,n));
// 	printf("%s\n", dst);
// 	printf("%zu\nVRAI:", strlcat(dst1, src1, n));
// 	printf("%s\n", dst1);
// 	return(0);
// }

