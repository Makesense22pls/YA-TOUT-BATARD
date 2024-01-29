/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:13:54 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/19 08:51:41 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (0);
}

// int	main()
// {
// 	char s1[] = "TAMAMAN";
// 	char s2[] = "TONPAPA";
// 	printf("NB :%i\n", ft_strcmp(s1,s2));
// }
// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;
// 	while (s1[i] || s2[i])
// 	{
// 		if(s1[i] != s2[i])
// 			return (s1[i] - s2[i]);
// 		i ++;
// 	}
// 	return (0);
// }