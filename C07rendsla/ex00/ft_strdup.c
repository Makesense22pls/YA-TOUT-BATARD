/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:57:19 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/29 11:38:19 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copie;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	copie = malloc(sizeof (char) * (len + 1));
	if (copie == NULL)
		return (NULL);
	while (i <= len)
	{
		copie[i] = src[i];
		i++;
	}
	return (copie);
}
// int	main()
// {
// 	char src [] = "wsg";
// 	printf("%s\n", ft_strdup(src));
// 	printf("%s\n", strdup(src));
// }