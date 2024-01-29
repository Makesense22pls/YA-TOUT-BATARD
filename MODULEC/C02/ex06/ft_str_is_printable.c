/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:25:18 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/19 08:39:23 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
	int main(void)
{
    char str1[] = "12345";
    char str2[] = "œ∑∂¶™¥πéèàçà^çàç^èà^èçè^çà";
    printf("%i\n", ft_str_is_printable(str1));
    printf("%i\n", ft_str_is_printable(str2));
}