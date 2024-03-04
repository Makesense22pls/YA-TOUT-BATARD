/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:49:16 by maxencefour       #+#    #+#             */
/*   Updated: 2024/03/03 19:15:53 by maxencefour      ###   ########.fr       */
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
			len += write(1,format[i],1);
		i++;	
	}
	var_end(ap);
	return (len);
}


int	main()
{
	int yo;

	yo = ft_printf("Salut les gars %s\n", "c'est Maxence");
	ft_printf("Le nb de char est %d\n", yo);
}