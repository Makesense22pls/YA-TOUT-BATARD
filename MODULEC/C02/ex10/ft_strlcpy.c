/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:46:20 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/17 15:41:50 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && (i < size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int     main(void)
// {
//     char    dest[50] = "oer223";
//     char    src [] = "C'est vraiment kdoooooooooo";
//     int     size;
//     size = 10;
//     printf("%d\n", ft_strlcpy(dest, src, size));
//     printf(".%s.\n\n", dest);
//     printf("%lu\n", strlcpy(dest, src, size));
//     printf(".%s.\n\n", dest);
// }
