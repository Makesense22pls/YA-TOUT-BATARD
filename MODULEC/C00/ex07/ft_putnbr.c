/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:53:56 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/19 08:14:36 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		(ft_putnbr(nb / 10));
	}
	ft_putchar(nb % 10 + '0');
}
// int	main(void)
// {
// 	ft_putnbr(10);
// 	write(1, "\n", 1);
// 	ft_putnbr(-1);
// 	write(1, "\n", 1);
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(-123);
// 	write(1, "\n", 1);
// 	ft_putnbr(INT_MAX);
// 	write(1, "\n", 1);
// 	ft_putnbr(INT_MIN);
// 	return (0);
// }