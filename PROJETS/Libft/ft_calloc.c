/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:53:12 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/16 22:31:55 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*copie;

	copie = malloc((size)*(count));
	if (!copie)
		return (NULL);
	ft_bzero(copie, size * count);
	return (copie);
}

// int	main()
// {
// 	size_t count = 3;
// 	size_t size = 4;
// 	printf("%s\n", ft_calloc(count, size));
// 	printf("%s\n", calloc(count, size));
// 	return(0);
// }
