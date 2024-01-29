/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:03 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/22 15:48:15 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	wsh;

	wsh = 2;
	if (nb <= 2)
		return (2);
	while (wsh <= nb / wsh)
	{
		if (nb % wsh == 0)
		{
			nb ++;
			wsh = 2;
		}
		else
			wsh ++;
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("ALORS : %i\n", ft_find_next_prime(20));
// 	return(0);
// }