/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:23:58 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/25 11:40:52 by mafourni         ###   ########.fr       */
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
	if (argc == 2)
		{
			while (((argv [1][i]) && ((argv [1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)))
				i ++;
			while  ((argv[1][i]) && (!((argv [1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)))
				{
					ft_putchar(argv[1][i]);
					i++;
				}
		}
	ft_putchar('\n');
	return(0);
}