/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:16:00 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/17 12:10:55 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j ++;
	while (src[i] && i < n)
		dest[j ++] = src[i ++];
	dest[j] = '\0';
	return (dest);
}

int	main()
{
	char dest[100] = "Coucou";
	char src[] = "LaTeam";

	printf("Oe:%s\n", ft_strncat(dest, src, 4));
}