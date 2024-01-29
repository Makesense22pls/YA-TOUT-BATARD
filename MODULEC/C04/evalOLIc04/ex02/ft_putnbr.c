/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:51:06 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/28 19:26:52 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 		{
// 			write(1, "-2147483648", 11);
// 		}
// 	if (nb < 0)
// 		{
// 			write(1, "-", 1);
// 			nb = -nb;
// 		}
	
// 	if (nb > 9)
// 		ft_putnbr(nb / 10);
// 	ft_putchar(nb % 10 + '0');
// }


// int	main()
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }