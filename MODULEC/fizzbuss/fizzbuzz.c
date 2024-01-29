/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:49:29 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/28 13:45:13 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int number)
{

	if (number > 9)
		ft_write_number(number /10);
	char chiffre = number % 10 + '0';
	write(1, &chiffre, 1);
}
int main(void)
{
	int number = 1;
	while(number <= 100)
	{
		if(number % 3 == 0 && number % 5 == 0)
			{
				write(1, "fizzbuzz", 8);
			}
		else if (number % 5 == 0)
			{
				write(1,"buzz",4);
			}
		else if (number % 3 == 0)
			write(1,"fizz",4);
		else
			ft_write_number(number);
		number ++;
		write(1, "\n",1);
	}
}