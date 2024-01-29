/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:00:49 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/24 11:22:47 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power != 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
// int	main()
// {
// 	printf("Resultat:%i\n", ft_iterative_power(-1, 1));
// 	return(0);
// }
