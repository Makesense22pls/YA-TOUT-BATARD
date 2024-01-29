/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:39:17 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/25 12:56:15 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int comptesign = 1;
	int result = 0;
	while ((str[0] >= 9 && str[0] <= 13) || str[0] == 32)
		str ++;
	if (str[0] == '+' || str[0] == '-')
	{
		if(str[0] == '-')
		{
			comptesign *= -1;
		}
		str ++;
	}
	while (str[0] >= '0' && str[0] <= '9')
		{
			result = result * 10 + (str[0] - '0');
			str ++;
		}
	return(result * comptesign);
}
// int	main()
// {
// 	char str [] = "  ++--+5678ab";
// 	printf("Alors :%i\n", ft_atoi(str));
// 	return(0);
// }