/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:25:57 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/23 16:12:02 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	if (str[0] == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	char str[100] = "Couxcou";
	char to_find[] = "xcou";

	printf("Oe:%s\n", ft_strstr(str, to_find));
	printf("Oererwerw:%s\n", strstr(str, to_find));
}