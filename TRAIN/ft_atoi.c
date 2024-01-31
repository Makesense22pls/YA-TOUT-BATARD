/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:42:33 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 21:01:23 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int result = 0;
    int comptesign = 1;
    while(str[0] >= 9 && str[0] <= 13 || str[0] == 32)
        str++;
    if (str[0] == '-' || str[0] == '+')
    {
		if (str[0] == '-')
			{
				comptesign *= -1;
			}
		str++;
	}
	while (str[0] >= '0' && str[0] <= '9')
	{
		result = result * 10 + (str[0] - '0');
		str++;
	}
	return (result * comptesign);
}
 int main()
{
	char str [] = "    +-52y34ab567";
	printf("%i\n",ft_atoi(str));
	printf("%i\n", atoi(str));
	return (0);
 }