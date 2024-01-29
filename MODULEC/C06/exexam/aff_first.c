/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:09:26 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/20 13:32:58 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}

int	main(int argc, char **argv)
{
	if(argc > 1)
		{
			int inverse;
			int i;
			i = 0;
			inverse = argc-1;
			while(argv[inverse])
			{
				i = 0;
				while(argv[inverse--][i])
				{
					ft_putchar(argv[argc--][i]);
					i++;
				}
				write(1, "\n",1);
				argvinverse --;
			}
		}
	write(1, "\n",1);
	return(0);
}