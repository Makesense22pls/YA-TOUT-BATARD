/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:17:06 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/19 08:22:12 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	depot;

	depot = *a / *b;
	*b = *a % *b;
	*a = depot;
}
/*int main ()
{
	int a;
	int b;
	
	a = 10;
	b = 2;
	
	ft_ultimate_div_mod( &a, &b);
	printf("div %d\n", a);
	printf("reste %d", b);
	return(0);
}*/