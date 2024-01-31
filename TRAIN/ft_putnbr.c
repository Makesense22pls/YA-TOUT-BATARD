/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:03:51 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 21:16:20 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return;
		}
	if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
	if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
	ft_putchar(nb % 10 + '0');
}

int	main()
{
	ft_putnbr(1234);
	return (0);
}