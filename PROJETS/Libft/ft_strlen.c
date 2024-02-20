/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:17:38 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/15 18:05:27 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(const	char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

// int	main()
// {
// 	char str [] = "123456789";
// 	printf("STRLEN est: %i\n", ft_strlen(str));
// }