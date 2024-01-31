/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:32:55 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 22:11:51 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int cherche(char *argv1, int i)
{
	int b = 0;
	while (b < i)
	{
		if (argv1[b] == argv1[i])
			return (0);
		b ++;
	}
	return(1);
}


void	ecris(char *argv1, char *argv2)
{
	int i = 0;
	int j = 0;
	while (argv1[i])
	{
		j = 0;
		while(argv2[j])
			{
				if(argv1[i] == argv2[j] && cherche(argv1, i))
				{
					write(1, &argv1[i], 1);
					break;
				}
				j++;
			}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		ecris(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return(0);
}