/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:09:28 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/23 09:13:42 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len ++;
	return (len);
}

// int	 main()
// {
// 	char str[] = "Oui";
// 	printf("%i\n", ft_strlen(str));
// }