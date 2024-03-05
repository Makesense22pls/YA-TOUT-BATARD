/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:24:09 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/04 20:57:03 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
static int	ft_putnbr(int n)
{
	long len;

	len = n;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	len += ft_putchar(n % 10 + '0');
	return (len);
}

int print_nbru(unsigned int n)
{
	int len;

	if (n < 0)
		return (len);
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		len += ft_putnbr(n);
	}
	return (len);
}
