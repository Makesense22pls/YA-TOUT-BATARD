/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affpremier.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:31:59 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/27 13:20:06 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

	void	ft_putchar(char c)
	{
		write(1,&c, 1);
	}
	
	void	ft_putstr(char *str)
	{
		int	wa;
		
		wa = 0;
		while (str[wa] != '\0')
		{
			ft_putchar(str[wa]);
			wa++;
		}
	}

	int	main(int	argc, char **argv)
	{
		(void)argc;
		ft_putstr(argv[0]);
		write(1, "\n", 1);
		return (0);
		
	}

// int	ft_strlen(char *str)
// {
// 	int i;
// 	i = 0;
// 	while(str[i])
// 		{
// 			i++;
// 		}
// 	return i;
// }

// int	main()
// {
// 	char str []= "oeoer3f";
// 	printf("NB EST: %d\n", ft_strlen(str));
// }

// void	putstr(char *str)
// {
// 	int i;
// 	i = 0;
// 	while(str[i])
// 		{
// 			ft_putchar(str[i]);
// 			i++;
// 		}
// 	write(1, "\n",1);
// }
// int main()
// {
// 	char str [] = "qwerty";
// 	putstr(str);
// 	return (0);
// }



char *printrev(char *str)
