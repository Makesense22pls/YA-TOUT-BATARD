/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:34:15 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/16 22:41:46 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *s_;
	size_t	i;

	s_ = (unsigned char*) s;
	i = 0;
	if(!s || n == 0)
		return;
	while (n--)
	{
		*s_++ = '\0';
	}
}
// int main()
// {
// 	char s [] = "WESH LA TEAM";
// 	size_t n = 7;
// 	printf("%s\n", ft_bzero(s, n));
// 	return (0);
// }