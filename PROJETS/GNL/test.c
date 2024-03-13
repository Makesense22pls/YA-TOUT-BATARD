/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:50:03 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/12 12:59:29 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>  // Pour printf


// READ MARCHE COMME CA OKKKKKK
int main()
{
	int stock;
	int fd;
	fd = open("test.txt", O_RDWR);
	char *buffer;
	size_t i = 5;
	stock = read(fd, buffer,i);
	printf("Le nb de bytes lu est : %i", stock);
}