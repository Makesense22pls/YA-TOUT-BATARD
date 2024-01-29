/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:08:40 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/21 15:08:38 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	resultat;
	int	comptesign;

	resultat = 0;
	comptesign = 1;
	while ((str[0] >= 9 && str[0] <= 13) || str[0] == 32)
		str++;
	while (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			comptesign *= -1;
		str++;
	}
	while (str[0] >= '0' && str[0] <= '9')
	{
		resultat = resultat * 10 + (str[0] - '0');
		str ++;
	}
	return (resultat * comptesign);
}

int main()
{
	char str [] = "    ++++52y34ab567";
	printf("%i\n",ft_atoi(str));
	return (0);
}
// VRAI ATOI
// int ft_atoi(char *str)
// {
// 	int	resultat;
// 	int comptesign;
// 	resultat = 0;
// 	comptesign = 1;
// 	while ((str[0] >= 9 && str[0] <= 13) || str[0] == 32)
// 		str++;
// 	if (str[0] == '-' || str[0] == '+')
// 	{
// 		if (str[0] == '-')
// 			comptesign = -1;
// 		str++;
// 	}
// 	while (str[0] >= '0' && str[0] <= '9')
// 	{
// 		resultat = resultat * 10 + (str[0] - '0');
// 		str ++;
// 	}
// 	return (resultat * comptesign);
// }
// int main()
// {
// 	char str [] = "    -52y34ab567";
// 	printf("%i\n",ft_atoi(str));
// 	return (0);
// }