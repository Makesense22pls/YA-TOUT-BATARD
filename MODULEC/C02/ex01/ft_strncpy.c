/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:50:19 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/20 19:03:00 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}
int	main()
{
	char src[50] = "qweri";
	char dest[50] = "OEOEOEOEO";
	// printf("Avant src:%s\n", src);
	// printf("Avant dst:%s\n", dest);
	printf("oe:%s\n",ft_strncpy(dest, src, 100));
	printf("%s\n",strncpy(dest, src, 100));
	// printf("Apres src:%s\n", src);
	// printf("Apres dst:%s\n", dest);	
}