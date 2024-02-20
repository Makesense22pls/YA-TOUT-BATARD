/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:32:31 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/15 22:06:26 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	if(!s1)
		return(0);

	int len;
	int i;
	char *copie;

	len = 0;
	i = 0;
	while(s1[len])
		len ++;
	copie = malloc(sizeof(char) * (len + 1));
	if(!copie)
		return(0);
	while(i < len)
	{
		copie[i] = s1[i];
		i++;
	}
	copie[i] = '\0'; 
	return(copie);
}

// int	main()
// {
// 	char *s1;
// 	s1 = NULL;
// 	printf("%s\n", ft_strdup(s1));
// 	printf("%s\n", strdup(s1));
// }