/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:43:03 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/29 15:32:50 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}
// int	main(int argc , char **argv)
// {
// 	int i = 0;
// 	if (argc == 2)
// 		{
// 			while(argv[1][i + 1] != '\0')
// 			{
// 				i ++;
// 			}
// 			while(i >= 0)
// 			{
// 				ft_putchar(argv[1][i]);
// 				i --;
// 			}
// 		}
// 	ft_putchar('\n');
// }

char	*print_rev(char *str)
{
	if (*str)
	{
		int i = 0;
		while(str[i])
		{
			i++;
		}
		i--;
		while(i >= 0)
		{
			ft_putchar(str[i]);
			i --;
		}
		ft_putchar('\n');
	}
	// return(str);
	return(0);
}
int	main()
{
	char *str = NULL;
	print_rev(str);
	return(0);
}