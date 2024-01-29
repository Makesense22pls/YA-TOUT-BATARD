/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:29:11 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/26 10:15:01 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cherche(char argv1[], int i)
{
	int b;
	b = 0;
	while(b < i)
	{
		if (argv1[i] == argv1[b])
		{
			return(0);
		}
		b ++;
	}
	return(1);
}

void	ecris(char argv1[], char argv2[])
{
	int f;
	int i;
	f = 0;
	i = 0;
	while(argv1[i])
		{
			f = 0;
			while(argv2[f])
			{
				if (argv1[i] == argv2[f] && cherche(argv1, i))
					{
						write(1, &argv1[i], 1);
						break ;
					}
				f ++;
			}
			i ++;
		}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		{
			ecris(argv[1], argv[2]);
		}
		write(1, "\n", 1);
	return(0);
}

