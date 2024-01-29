/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:40:02 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/29 11:52:27 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*tab;

	i = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (len));
	while (i < len)
	{
		tab [i] = min + i;
		i ++;
	}
	return (tab);
}
// int	main(void)
// {
// 	int	min = -5;
// 	int	max = 0;
// 	int	i = 0;
// 	int len = max - min;
// 	int *result;

// 	result = ft_range(min, max);
// 	while (i < len)
// 	{
// 		printf("%i\n", result[i]);
// 		i ++;
// 	}
// }
