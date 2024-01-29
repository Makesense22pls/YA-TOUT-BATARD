/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:53:56 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/17 14:01:37 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		{
			write(1, "-2147483648",11);
		}
	if(nb < 0)
		{
			write(1, "-",1);
			nb = -nb;
		}
	if (nb >=10)
		{
			ft_putnbr(nb / 10);
		}
	ft_putchar(nb % 10 + '0');
}
int	main()
{
	ft_putnbr(678);
}