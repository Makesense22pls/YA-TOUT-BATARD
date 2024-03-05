/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:49:16 by maxencefour       #+#    #+#             */
/*   Updated: 2024/03/04 20:57:20 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "printf.h"

int	ft_printf(const char *format,...)
{
	va_list	ap;
	size_t	len;
	size_t	i;

	va_start(ap, format);
	len = 0;
	i = 0;
	while(format[i] != '\0')
	{
		if (format[i]== '%')
			len += print_format(format[++i], ap);
		else
			len += write(1,&format[i],1);
		i++;
	}
	return (len);
}


int main()
{
	// char *str;
	// str = NULL;
	// printf("P =%p\n", &str);
	// ft_printf("P =%p\n",&str);

	// printf("\n\n");

	// printf("C =%c\n", 'c');
	// ft_printf("C =%c\n", 'c');

	// printf("\n\n");

	// printf("S = %s\n", "Oui c'est moi");
	// ft_printf("S = %s\n","Oui c'est moi");

	// printf("\n\n");

	printf("x = %x\n", -7897895);
	ft_printf("x = %x\n",-7897895);

	printf("X = %X\n", -7897895);
	ft_printf("X = %X\n",-7897895);
	
	printf("I = %i\n", 0);
	ft_printf("I = %i\n",0);

	printf("D = %d\n", -123);
	ft_printf("D = %d\n",-123);
	printf("u = %u\n", -1);
	ft_printf("u = %u\n",-123);
	
	return (0);
}