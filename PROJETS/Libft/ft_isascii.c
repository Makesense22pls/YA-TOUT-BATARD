/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:44:28 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/13 15:49:58 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
	{
		return (1);
	}
	else
		return (0);
}

// int main (void)
// {
// 	printf("%i\n",ft_isascii(0122));
// 	printf("%i\n",isascii(0122));
// }