/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:50:46 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/29 16:46:34 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	depot;

	depot = 0;
	depot = *a;
	*a = *b;
	*b = depot;
}
int	main()
{
	int a;
	int b;
	a = 10;
	b = 20;
	printf("Avant %d, %d", a, b);
	ft_swap(&a,&b);
	printf("Apres %d, %d", a, b);
	return (0);
}