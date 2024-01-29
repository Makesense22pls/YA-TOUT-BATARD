/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:02:25 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/25 11:13:14 by mafourni         ###   ########.fr       */
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
	if (argc == 4)
	{
		while(argv[1][i] && argv[2][1] == '\0' && argv[3][1] == '\0')
			{
				if (argv[1][i] == argv[2][0])
					{
						argv[1][i] = argv [3][0];
					}
				ft_putchar(argv[1][i]);
				i ++;
			}
	}
	ft_putchar('\n');
}