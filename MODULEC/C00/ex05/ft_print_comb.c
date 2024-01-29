/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:49:41 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/10 12:01:53 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	ft_putspace(char s)
// {
// 	write(1, ", ", 2)
// }

void	ft_print_comb(void)
{
	int	unite;
	int	dizaine;
	int	centaine;

	unite = '0';
	while (unite <= '7')
	{
		dizaine = unite + 1;
		while (dizaine <= '8')
		{
			centaine = dizaine + 1;
			while (centaine <= '9')
			{
				ft_putchar(unite);
				ft_putchar(dizaine);
				ft_putchar(centaine);
				if (unite != '7' || dizaine != '8' || centaine != '9')
					write(1, ", ", 2);
				centaine++;
			}
			dizaine ++;
		}
		unite ++;
	}
}
/*int	main()
{
	ft_print_comb();
	return(0);
}*/
