/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phind_union.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:46:36 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 22:46:48 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int cherche(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

void ecrire(char *str1, char *str2)
{
    while (*str1)
    {
        if (!cherche(str2, *str1))
            write(1, str1, 1);
        str1++;
    }
    while (*str2)
    {
        if (!cherche(str1, *str2))
            write(1, str2, 1);
        str2++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    ecrire(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
