/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:43:30 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/19 08:17:04 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main()
{
	int nbr;
	nbr = 65;
	printf("%d\n", nbr);
	ft_ft(&nbr);
	printf("%d\n", nbr);
	printf("%d\n", *nbr);
	printf("%p\n", &nbr);
	return (0);
}