/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:38:26 by maxencefour       #+#    #+#             */
/*   Updated: 2024/03/04 00:09:00 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_format(char found, va_list ap)
{
    size_t  len;
    
    len = 0;
    if (found == 'c')
        len += print_char(va_arg(ap,int));
    else if (found == 's')
        len += print_string(va_arg(ap,int));
    else if ()
}
