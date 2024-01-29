/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:19:37 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/26 10:12:26 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cherche(char *argv1, int i)
{
	int b;
	b = 0;
	while (b < i)
	{
		if(argv1[b] == argv1[i])
			return(0);
		b ++;
	}
	return(1);
}
void	ecris(char *argv1, char *argv2)
{
	int i;
	int j;
	i = 0;
	while(argv1[i])
	{	
		j = 0;
		while(argv2[j])
		{
			if (argv1[i] == argv2[j] && cherche(argv1, i))
				{
					write(1, &argv1[i], 1);
					break;
				}
			j ++;
		}
	i ++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ecris(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
// int	cherche(char argv1, int i)
// {
// 	int b;

// 	b = 0;
// 	while(b < i)
// 		{
// 			if(argv1[i] = argv[b])
// 				return(0);
// 			b ++;
// 		}
// 	return(1);
// }
// void ()