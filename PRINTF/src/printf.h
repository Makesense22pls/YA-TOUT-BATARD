/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:57:37 by maxencefour       #+#    #+#             */
/*   Updated: 2024/03/04 20:54:57 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_A
# define PRINT_A

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>


void    ft_putstr(char *str);
int	print_format(char found, va_list ap);
int	print_str(char *str);
int	print_char(char c);
static int	ft_putchar(char c);
int print_hexmin(unsigned int n);
int print_ptr(unsigned long long n);
int print_hexmaj(unsigned int n);
int print_nbr(unsigned int n);
int print_nbru(unsigned int n);
#endif

