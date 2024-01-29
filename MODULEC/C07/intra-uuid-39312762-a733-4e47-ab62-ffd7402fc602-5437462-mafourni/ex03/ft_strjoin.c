/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:51:36 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/29 11:48:02 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		len;
	char	*result;

	index = 0;
	len = 0;
	while (index < size)
		len = len + ft_strlen(strs[index++]);
	if (size <= 0)
		len = 0;
	else
		len = len + ft_strlen(sep) * (size - 1);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	*result = '\0';
	index = 0;
	while (index < size)
	{
		ft_strcat(result, strs[index]);
		if (index < (size - 1))
			ft_strcat(result, sep);
		index++;
	}
	return (result);
}

// int	main()
// {
// 	char *str[] = {"wsh", "bg", "_"};
// 	const char *result = ft_strjoin(0, str, "_");

// 	printf("%s\n", result);
// }
