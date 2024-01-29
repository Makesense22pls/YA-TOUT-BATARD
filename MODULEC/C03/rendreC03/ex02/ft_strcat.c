/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:43:53 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/25 15:40:42 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i ++;
	while (src[j])
	{
		dest[i ++] = src[j];
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}
int	main()
{
	char dest [500] = "Coucou";
	char src [] = "La Team";
	printf("Oe :%s\n", ft_strcat(dest, src));
	printf("Oe :%s\n", strcat(dest, src));
}
