/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affdernier.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:27:19 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/11 21:30:54 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int i;
	i = 0;
	while(argv[argc-1][i])
		{
			ft_putchar(argv[argc-1][i]);
			i++;
		}
	write(1,"\n",1);
	return(0);
}