/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:01:17 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/20 12:55:31 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>
#include <fcntl.h>

size_t	ft_countwords(char const *s, char clc)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	if(!s)
		return (0);
	while(s[i])
	{
		if (s[i] != clc && (s[i+1] == clc || s[i+1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int	ft_mallocok(char **oe, size_t position, size_t taille)
{
	size_t i;

	i = 0;
	oe[position] = malloc(sizeof(char)* taille);
	if(!oe[position])
	{
		while (i < position)
		{
			free (oe[i++]);
		}
		free (oe);
		return(1);
	}
	return (0);
}
int	faislajob(char	**oe, char const *s, char clc)
{
	size_t len;
	size_t i;
	
	while(*s)
	{
		len = 0;
		while(*s == clc && *s)
			s++;
		while(*s != clc && *s)
			{
				len++;
				s++;		
			}
	if (len)
	{
		if (ft_mallocok(oe, i, len + 1))
			return (1);
	}
	ft_strlcpy(oe[i], s - len, len + 1);
	i++;
	}
	return (0);
	
}

char **ft_split(char const *s, char c)
{
	size_t nbarrays;
	char **oe;

	if(!s)
		return(NULL);
	nbarrays = ft_countwords(s, c);
	oe = malloc(sizeof(char *) * (nbarrays + 1));
	if (!oe) 
		return (NULL);
	oe[nbarrays] = NULL;
	if (faislajob(oe, s ,c))
		return(NULL);
	return (oe);
}


int main()
{
	char *s = "         ";
	char **v = ft_split(s, ' ');
	while (*v)
		{
			printf("%s\n", *v++);
		}
	return (0);
}


// #include <stdio.h>
// #include "libft.h" // Assuming your libft header file is named "libft.h"

// int main(void) 
// {
//     char const *s = "  hello  world  ";
//     char **result = ft_split(str, " ");
//     if (result) 
// 	{
//         int i = 0;
//         while (result[i]) 
// 		{
//             printf("%s\n", result[i]);
//             free(result[i]);
//             i++;
//         }
//         free(result);
//     } 
// 	else 
// 	{
//         printf("Split failed\n");
//     }
//     return 0;
// }
