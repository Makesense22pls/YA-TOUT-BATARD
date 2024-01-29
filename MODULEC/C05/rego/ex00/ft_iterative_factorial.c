/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:07:23 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/22 11:10:04 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 0;
	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i != 1)
	{
		nb *= i - 1;
		i --;
	}
	return (nb);
}

// int	main()
// {
// 	printf("Resultat:%i\n", ft_iterative_factorial(-6));
// 	return(0);
// }