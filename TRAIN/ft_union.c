/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:12:28 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 23:22:19 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int	letters [128] = {0};
	while(argv[1][i])
	{
		if (letters[argv[1][i]] != 1)
			{
				write(1, &argv[2][i], 1);
				letters[argv[1][i]] = 1;
			}
		i ++;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		if (letters[argv[2][i]] != 1)
		{
			write(1, &argv[2][i], 1);
			letters[argv[2][i]] = 1;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

