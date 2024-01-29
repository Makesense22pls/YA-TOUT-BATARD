/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:22:19 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/22 18:46:17 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	wsh;

	wsh = 1;
	while (wsh * wsh <= nb && wsh <= 46340)
	{
		if (wsh * wsh == nb)
			return (wsh);
		wsh ++;
	}
	return (0);
}
// int	main()
// {
// 	printf("La racine carrée : %i\n",ft_sqrt(1034201281));
// 	return(0);
// }
