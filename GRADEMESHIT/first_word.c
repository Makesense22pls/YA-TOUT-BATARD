/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:18:53 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/23 10:28:14 by mafourni         ###   ########.fr       */
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
	if (argc == 2)
	{
		while(argv[1][i] >= 9 && argv[1][i] <= 13 || argv[1][i] == 32)
		{
			i++;	
		}
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n' && argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}