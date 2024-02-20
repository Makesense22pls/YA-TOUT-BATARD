/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:19:07 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/14 14:01:31 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}

// int main (void)
// {
// 	printf("%i\n",ft_isprint(0122));
// 	printf("%i\n",isprint(0122));
// }
//METS 0128 CA COMPIL PAS  ALORS QUE DANS ISDIGIT CA COMPIL ?