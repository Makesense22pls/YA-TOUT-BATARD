/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:14:17 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/25 11:17:05 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while( str[i])
	{
		ft_putchar(str[i]);
		i ++;
	}
}

int	main()
{
	char str[] = "oeoe";
	ft_putstr(str);
	return(0);
}