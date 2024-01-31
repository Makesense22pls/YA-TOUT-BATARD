/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:42:55 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 18:57:25 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int argc, char **argv)
{
    int i;
	i = 0 ;
    if (argc > 1)
    {
    	while (argv[argc - 1][i] != '\0')
    	{
			ft_putchar(argv[argc-1][i]);
			i ++;
    	}
    }
	ft_putchar('\n');
	return(0);
}

