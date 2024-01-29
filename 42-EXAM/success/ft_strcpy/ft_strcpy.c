/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:48:25 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/25 10:50:42 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while(s2[i])
		{
			s1[i] = s2[i];
			i ++;
		}
	s1[i] = '\0';
	return(s1);
}
// int main()
// {
// 	char s1 [45] = "Oe";
// 	char s2 [] = "Non";
// 	ft_strcpy(s1, s2);
// 	printf("%s\n", s1);
// 	strcpy(s1, s2);
// 	printf("%s\n", s1);
// }