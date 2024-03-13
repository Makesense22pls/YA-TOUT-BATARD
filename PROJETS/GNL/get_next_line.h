/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:59 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/13 17:49:53 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

#ifndef SIZE_BUFFER
# define SIZE_BUFFER 1024

char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
#endif
