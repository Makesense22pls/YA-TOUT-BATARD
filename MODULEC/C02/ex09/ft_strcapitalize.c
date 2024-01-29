/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:20:45 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/19 08:41:26 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || \
			(str[i] >= 'a' && str[i] <= 'z') || \
			(str[i] >= 'A' && str[i] <= 'Z')))
		{
			if (str[i +1] >= 'a' && str[i +1] <= 'z')
				str[i +1] -= 32;
		}
		i++;
	}
	return (str);
}
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux;";
	printf("OMG : %s\n", ft_strcapitalize(str));
}