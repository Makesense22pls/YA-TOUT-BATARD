/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:51 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/29 20:38:29 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_that_line(char *keep_line)
{
	size_t i;
	char *line_clean;

	line_clean = NULL;
	i = 0;
	if (!keep_line)
		return (NULL);
	while (keep_line[i] != '\n')
		i++;
	i++;
	line_clean = malloc((sizeof (char) * i + 1));
	ft_memmove(line_clean, keep_line, i + 1);
	line_clean[i] = '\0';
	return (line_clean);
}

char 	*read_fd(int fd, char *keep_line)
{
	char buffer[BUFFER_SIZE + 1];
	int check_read;

	check_read = read(fd, buffer, BUFFER_SIZE);
	if (check_read == -1)
		return (NULL);
	while (check_read > 0)
	{
		buffer[check_read] = '\0';
		if (!keep_line)
			keep_line = ft_strdup(buffer);
		else
			keep_line = ft_strjoin(keep_line, buffer);
		if (ft_strchr(keep_line, '\n') != 0)
			break;
		check_read = read(fd, buffer, BUFFER_SIZE);
	}
	return (keep_line);
}

char	*get_next_line(int fd)
{
	static char	*keep_line;
	char		*line;
	
	line = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
	{
		keep_line = NULL;
		return (NULL);
	}
	else
	{
		keep_line = read_fd(fd, keep_line);
		if (!(ft_strchr(keep_line, '\n') != 0))
			return (line = keep_line, keep_line = NULL, line);
		line = get_that_line(keep_line);
		if (keep_line[0] == '\n')
			keep_line = NULL;
		else
			keep_line = ft_strdup(ft_strchr(keep_line, '\n'));
	}
	return (line);
}

// int main()
// {
// 	int fd;
//  	char *str;
//  	fd = open("file.txt", O_RDONLY);
//  	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("MAIN:%s",str);
// 	free(str);
// 	close (fd);
// }

// int main(int argc, char **argv)
// {
// 	int fd;
// 	(void) argc;
//  	fd = open(argv[1], O_RDONLY);
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	close (fd);
// }

//  int main(void)
//  {
//  	int fd;
//  	char *str;
//  	fd = open("file.txt", O_RDONLY);
//  	str = get_next_line(fd);
//  	printf("%s", str);
//  	free(str);
// 		free(str);
// 		str = get_next_line(fd);
// 		printf("%s", str);
// 	free(str);
// 	str = get_next_line(fd);
// 	printf("%s", str);
// 	free(str);
// 	 str = get_next_line(fd);
// 	 printf("%s", str);
// 	 free(str);
// 	 str = get_next_line(fd);
// 	 printf("%s", str);
// 	 free(str);
// }
