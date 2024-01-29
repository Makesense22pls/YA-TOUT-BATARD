/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:28:52 by fwu               #+#    #+#             */
/*   Updated: 2024/01/28 15:00:15 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char **argv)
{
	t_arg 	*arg;
	char 	*dict_content;
	int 	i;
	
	arg = malloc(sizeof(*arg));
	check_arg(arg, argc, argv);
	if (arg->status == FALSE)
	{
		return (0);
	}
	
	ft_putstr(arg->value);
	ft_putstr("\n");
	
	dict_content = 0;
	dict_content = read_dict(arg->path);
	if (dict_content != 0)
	{
		i = 0;
		while (dict_content[i] != '\0')
		{
			ft_putchar(dict_content[i++]);
		}
		free(dict_content);
	}
	free(arg);
	return (0);
}
234

arr[i][j]

i = line /n
j = [(char*)key][(char*)word]

1

arr[1]
