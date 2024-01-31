/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:17:48 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 21:31:05 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char    *ft_strdup(char *src)
{
	int len = 0;
    int i = 0;
	char *copie;

	while(src[len])
	{
		len ++;
	}
	copie = malloc(sizeof (char) * (len + 1));
	if (copie == NULL)
		return (NULL);
	while(src[i])
	{
		copie[i] = src[i];
		i++;
	}
	copie[i] = '\0';
	return(copie);
}
 int	main()
 {
 	char src [] = "wsg";
 	printf("%s\n", ft_strdup(src));
 	printf("%s\n", strdup(src));
 }