/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:30:31 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/04 19:45:41 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_str(char *str)
{
	int count;

	count = 0;
	while(*str != '\0')
	{
		print_char((int)*str);
		str++;
		count++;
	}
	return (count);
}