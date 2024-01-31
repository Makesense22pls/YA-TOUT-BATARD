/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:45:42 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 20:15:55 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;

	i = 0;
	if (argc < 2)
		{
			ft_putchar('a');
			ft_putchar('\n');
			return(0);
		}
	while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				break;
			}
			else if (argv[1][i] != 'a')
			{
				ft_putchar('\n');
				break;
			}
			i++;
		}
}