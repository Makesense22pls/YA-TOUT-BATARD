/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:06:46 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 19:16:21 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	compte(char c)
{
	int repeat = 1;
	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else
		return(repeat);
	return (repeat);
}

int	main(int argc, char **argv)
{
	int repeat = 0;
	int i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			repeat = compte(argv[1][i]);
			while (repeat != 0)
			{
				ft_putchar(argv[1][i]);
				repeat --;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}
