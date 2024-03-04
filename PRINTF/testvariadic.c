/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testvariadic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:55:52 by maxencefour       #+#    #+#             */
/*   Updated: 2024/03/03 19:06:01 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"



float moyen(int n, ...)
{
	va_list ap;
	int	total;
	int	i;
	
	va_start(ap,n);
	total = 0;
	i = 0;
	// printf("Valeur de n %i\n\n", n);
	while (i < n)
	{
		total += va_arg(ap, int);
		printf("Valeur de total %d\n\n", total);
		++i;
	}
	va_end(ap);
	return (total / n);
}

int main()
{
    float age_moyen;
    age_moyen = moyen(2,        15,45,32,14);
    printf("age moyen est de %f\n", age_moyen);
}