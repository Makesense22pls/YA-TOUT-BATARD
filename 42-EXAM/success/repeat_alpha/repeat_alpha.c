/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:53:12 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/25 11:01:25 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	compteur(char c)
{
	int repeat;

	if (c >= 'a' && c <= 'z')
		{
			repeat = c - 'a' + 1;
			return repeat;
		}
	if (c >= 'A' && c <= 'Z')
		{
			repeat = c - 'A' + 1;
			return repeat;
		}
	else
		repeat = 1;
	return repeat;
}
int main(int argc, char **argv)
{
	int i;
	int repeat;

	i = 0;
	if (argc == 2)
		{
			while(argv[1][i])
				{
					repeat = compteur(argv[1][i]);
					while (repeat --)
					{
						ft_putchar(argv[1][i]);
					}
					i ++;
				}
		}
	ft_putchar('\n');
}