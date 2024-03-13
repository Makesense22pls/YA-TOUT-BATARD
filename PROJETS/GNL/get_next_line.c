/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:51 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/13 18:25:30 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *extract_line



char *read_fd(int fd, char *buffer)
{
	char	*str;
	char 	*temp;
	int		count;

	str = NULL;
	count = 1;
	while (!(ft_strchr(buffer, '\n')) || !(ft_strchr(buffer, '\0')))
	{
		count = read(fd,temp, SIZE_BUFFER);
		if (count = -1)
				return (NULL);
		buffer[count] = '\0';
		buffer = ft_strjoin(str, temp);
		if (!buffer)
		{
			buffer = ft_strdup(temp);
		}
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char *buffer;
	char *line;
	
	if (SIZE_BUFFER <= 0 | fd <= 0)
		return (NULL);
	else
	{
		buffer = read_fd(fd, buffer);
	}
}



// READ MARCHE COMME CA OKKKKKK
int main()
{
	int stock;
	int fd;
	fd = open("test.txt", O_RDWR);
	if (fd != NULL)
	{
	char *buffer;
	size_t i = 5;
	stock = read(fd, buffer,i);
	printf("Le nb de bytes lu est : %i", stock);
	}
	else 
		printf("ERROR");
}

int main(int argc, char **argv)
{
	int fd;
	fd = open(argv[1], O_RDONLY);
	fd = 42;
	char *str = get_next_line(fd);
	while (str != NULL)
	{
		printf("%s", str);
		str = get_next_line(fd);
	}
	printf("%s", str);
}
