/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testvariadic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:55:52 by maxencefour       #+#    #+#             */
/*   Updated: 2024/03/04 20:45:24 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"



// float moyen(int n, ...)
// {
// 	va_list ap;
// 	int	total;
// 	int	i;
	
// 	va_start(ap,n);
// 	total = 0;
// 	i = 0;
// 	// printf("Valeur de n %i\n\n", n);
// 	while (i < n)
// 	{
// 		total += va_arg(ap, int);
// 		printf("Valeur de total %d\n\n", total);
// 		++i;
// 	}
// 	va_end(ap);
// 	return (total / n);
// }

// int main()
// {
// 	char *str = NULL;
// 	printf("%p", &str);
// 	return (0);
// }

#include <stdio.h>

int main() {
    int num = 42;
    printf("La valeur de num avec %%i est : %i\n", num);  // Utilisation de %i
    printf("La valeur de num avec %%d est : %d\n", num);  // Utilisation de %d
    return 0;
}
