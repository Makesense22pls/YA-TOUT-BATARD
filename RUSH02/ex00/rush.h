/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:34:45 by fwu               #+#    #+#             */
/*   Updated: 2024/01/28 15:22:43 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define TRUE  1
#define FALSE 0

//main.c

//check_arg.c
#define DEFAULT_PATH "numbers.dict"

typedef struct s_arg
{
	int		status;	
	char	*path;
	char	*value;
}	t_arg;

void check_arg(t_arg *arg, int argc, char **argv);

//utils.c
void	ft_putchar(char c);
void	ft_putstr(char *str);

//read_dict.c
#define READ_LENGTH 100
char	*read_dict(char *path);

//number_convert.c
