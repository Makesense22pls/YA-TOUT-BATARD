/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:42:52 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/20 11:46:01 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src,size_t dstsize)
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
// int main() 
// {
//     char src[] = "MAXENCE";
//     char dst[1]; // Taille suffisante pour contenir "MAXENCE" + '\0'

//     size_t len = ft_strlcpy(dst, src, sizeof(dst));
// 	strlcpy(dst, src, sizeof(dst));

//     printf("Source : %s\n", src);
//     printf("Destination : %s\n", dst);
//     printf("Longueur de src: %zu\n", len);

//     return 0;
// }