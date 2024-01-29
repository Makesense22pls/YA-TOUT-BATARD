/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:14:37 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/25 12:38:33 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int len;
	int i ;
	i = 0;
	len = 0;
	while(src[len])
		{
			len ++;
		}
	char *copie = (char*)malloc(sizeof(char) * (len +1));
	if (copie == NULL)
		return NULL;
	while (src[i])
		{
			copie[i] = src[i];
			i ++;
		}
	return (copie);
}

// int	main()
// {
// 	char src [] = "salut les gars";
// 	printf("%s\n", ft_strdup(src));
// }