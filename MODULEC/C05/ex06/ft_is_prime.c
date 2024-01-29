/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:51:50 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/22 14:49:29 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	wsh;

	wsh = 2;
	if ((nb <= 0) || (nb == 1))
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	while (wsh <= nb - 1)
	{
		if (nb % wsh == 0)
			return (0);
		wsh ++;
	}
	return (1);
}
// int	main(void)
// {
// 	printf("ALORS : %i\n", ft_is_prime(23));
// 	return(0);
// }