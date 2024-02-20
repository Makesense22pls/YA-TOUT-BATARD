/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:41:48 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/16 14:01:53 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i ++;
	}
}
// *address => data
// s[i] = *(address + i)
// int main ()
// {
// 	int fd;
// 	fd = open("beber.c", O_RDWR);
// 	printf("%d", fd);
// 	char s [] = "TAMERE";
// 	ft_putstr_fd(s, fd);
// 	return(0);
// }