/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:16:00 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/21 12:54:40 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i ++;
	while (src[j] && j < nb)
	{
		dest[i ++] = src[j ++];
	}
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	char dest[100] = "Coucou";
// 	char src[] = "LaTeam";
// 	printf("Oe:%s\n", ft_strncat(dest, src, 4));
// }