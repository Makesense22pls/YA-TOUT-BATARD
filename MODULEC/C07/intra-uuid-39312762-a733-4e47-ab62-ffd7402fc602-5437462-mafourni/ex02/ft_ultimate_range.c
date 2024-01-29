/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:48:46 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/29 11:53:02 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (len));
	if (tab == NULL)
		return (-1);
	while (i < len)
	{
		tab[i] = min + i;
		i ++;
	}
	*range = tab;
	return (len);
}

// int main() 
// {
//     int min = -10;
//     int max = -4;
//     int **range;
//     int length;

//     range = malloc(sizeof(int*));
//     length = ft_ultimate_range(range, min, max);
//     for (int i = 0; i < length; i++) {
//         printf("%d\n", (*range)[i]);
//     }
//     return 0;
// }
