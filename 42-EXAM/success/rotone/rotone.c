/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:09:54 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/24 17:12:29 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
					argv[1][i] += 1;
				else if (argv[1][i] == 'z')
					argv[1][i] -= 25;
				else if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
					argv[1][i] += 1;
				else if (argv[1][i] == 'Z')
					argv[1][i] -= 25;
				ft_putchar(argv[1][i]);
				i ++;
			}
	}
	ft_putchar('\n');
	return(0);
}