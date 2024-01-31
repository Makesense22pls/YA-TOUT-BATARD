/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:58:46 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 19:05:46 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
		i++;
    }
	s1[i] = '\0';
	return (s1);
}
 int main()
 {
 	char s1[50] = "e3";
 	char s2[] = "blablahhelloworld";
 	printf("dest avant:%s\n", s1);
 	printf("src avant:%s\n", s2);
 	ft_strcpy(s1, s2);
 	strcpy(s1, s2);
 	printf("dest apres:%s\n", s1);
 	printf("src apres:%s\n", s2);
}