/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:47:38 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/20 13:39:21 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char dest[50] = "e3";
// 	char src[] = "blablahhelloworld";
// 	printf("dest avant:%s\n", dest);
// 	printf("src avant:%s\n", src);
// 	ft_strcpy(dest, src);
// 	strcpy(dest, src);
// 	printf("dest apres:%s\n", dest);
// 	printf("src apres:%s\n", src);
// }