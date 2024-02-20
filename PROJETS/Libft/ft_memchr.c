/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:39:16 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/15 16:24:26 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *s_;
	unsigned char c_;
	unsigned int i;

	i = 0;
	s_ = (const unsigned char*) s;
	c_ = (const unsigned char)c;
	if (!s)
		return(0);
	while(i < n)
	{
		if (c_ == s_[i])
			return (void*)(s_ + i);
		i++;
	}
	return (0);
}

// #include "libft.h"

// int main(void)
// {
//     const char str[] = "bonjour";
//     int c = 'j';
//     size_t n = 6;

//     printf("%s\n",ft_memchr(str, c, n));
// 	printf("%s\n",memchr(str, c, n));

//     return 0;
// }
