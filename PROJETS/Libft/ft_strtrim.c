/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:34:50 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/19 15:32:45 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sameoupas(char const c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copie;
	size_t	i;
	size_t	debut;
	size_t	end;
	size_t	len;

	i = 0;
	debut = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (s1[debut] && ft_sameoupas(s1[debut], set))
		debut++;
	while (end > 0 && ft_sameoupas(s1[end - 1], set))
		end--;
	len = 0;
	if (end > debut)
		len = end - debut;
	copie = malloc(sizeof(char) * (len + 1));
	if (!copie)
		return (NULL);
	while (debut < end)
		copie[i++] = s1[debut++];
	copie[i] = '\0';
	return (copie);
}

// int main()
// {
// 	char *s1 = "aaaaa";
// 	char *set = "a";
// 	printf("%s\n", ft_strtrim(s1, set));
// }