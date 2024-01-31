/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:31:16 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 20:38:02 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int a = 10;
	int b = 5;
	ft_swap(&a, &b);
	printf("ALORS%i,%i\n",a, b);
	return (0);
}
// int	main()
// {
// 	int a;
// 	int b;
// 	a = 10;
// 	b = 20;
	
// 	printf("Avant %d, %d", a, b);
// 	ft_swap(&a,&b);
// 	printf("Apres %d, %d", a, b);
// 	return (0);
// }