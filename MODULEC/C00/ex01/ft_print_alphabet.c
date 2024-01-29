/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:48:02 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/19 07:56:18 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ccbb;

	ccbb = 'a';
	while (ccbb <= 'z')
	{
		write(1, &ccbb, 1);
		ccbb++;
	}
}
//  /*int	main()
// {
//     ft_print_alphabet();
//     return (0);
// }*/