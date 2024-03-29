/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:51 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/28 21:33:51 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// char	*ft_strtrim(char	*s)/*, char const *set*/
// {
// 	char	*copie;
// 	t_data d;

// 	d.i = 0;
// 	d.debut = 0;
// 	d.end = ft_strlen(s);
// 	if (!s)
// 		return (NULL);
// 	while (s[d.debut] != '\n' && s[d.debut] != '\0')
// 		d.debut++;
// 	// debut += 1 pou skip le \n;
// 	d.debut += 1;
// 	d.len = 0;
// 	if (d.end > d.debut)
// 		d.len = d.end - d.debut;
// 	copie = malloc(sizeof(char) * (d.len + 1));
// 	if (!copie)
// 	{
// 		free(copie);
// 		return NULL;
// 	}
// 	printf("copie:%p\n", copie);
// 	printf("s:%p\n", s);
// 	while (d.debut < d.end)
// 		copie[d.i++] = s[d.debut++];
// 	copie[d.i] = '\0';
// 	free(s);
// 	// printf("Test buffer apres trim:%s\n", copie);
// 	return (copie);
// }

// char	*get_that_line(char *stash)
// {
// 	char	*line;
// 	int		i;

// 	line = NULL;
// 	i = 0;
// 	if (stash == NULL)
// 		return (NULL);
// 	while (stash[i] != '\n' && stash[i] != '\0')
// 	{
// 		i++;
// 	}
// 	// if (i != '\0')
// 	i++;
// 	if (!line)
// 		line = malloc(sizeof(char) * (i + 1));
// 	else
// 		line = malloc(sizeof(char) * (i + 2));
// 	if (!line)
// 		return (NULL);
// 	if (!stash)
// 		line [i+1] = '\0';
// 	ft_strlcpy(line, stash, i + 1);
// 	printf("GET_THAT_LINE, line:%p\n", line);
// 	printf("GET_THAT_LINE, stash:%p\n", stash);
// 	return (line);
// }

// char 	*read_fd(int fd, char *buffer)
// {
// 	char	*stash;
// 	int		count;
// 	char	*temp;

// 	count = 1;
// 	temp = NULL;
// 	if (!temp)
// 		{
// 			temp = ft_strdup(buffer);
// 			printf("buffer:%p\n", buffer);
// 			printf("READ_FD in the first !temp ,temp:%p\n", temp);
// 			free(buffer);
// 		}
// 	while (!(ft_strchr(temp, '\n')) && count != 0)
// 	{
// 		stash = malloc(BUFFER_SIZE + 1);
// 		count = read(fd, stash, BUFFER_SIZE + 1);
// 		printf("BEFORE count --- ---- :%d\n", count);
// 		if (count == -1 || stash[0] == '\0')
// 		{
// 			// printf("AFTER IF:%s\n",stash);
// 			free(stash);
// 			return (NULL) ;
// 		}
// 		stash[count] = '\0';
// 		if (!temp)
// 			{
// 				temp = ft_strdup(stash);
// 				printf("READ_FD_in !temp ,stash:%p\n", stash);
// 				printf("READ_FD in !temp ,temp:%p\n", temp);
// 			}	
// 		else
// 			temp = ft_strjoin(temp, stash);
// 		printf("temp:%p\n", temp);
// 		printf("READ_FDstash:%p\n", stash);			
// 		free (stash);
// 	}
// 	return (temp);
// }
// char *clp(char *s1, char *s2)
// {
// }

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
	// size_t count;
	// count = 0;

	check_read = read(fd, buffer, BUFFER_SIZE);
	if (check_read == -1)
		return (NULL);
	// if (buffer[0] == '\0')
	// 	return (NULL);
	while (check_read > 0)
	{
		buffer[check_read] = '\0';
		if (!keep_line)
			{
				keep_line = ft_strdup(buffer);
			}
		else
			keep_line = ft_strjoin(keep_line, buffer);
		if (ft_strchr(keep_line, '\n') != 0)
		{
			break;
		}
		check_read = read(fd, buffer, BUFFER_SIZE);
	}
	return (keep_line);
}

char	*get_next_line(int fd)
{
	static char	*keep_line;
	char		*line;
	char 		*buffer_clean;
	char 		*temp;
	
	buffer_clean = NULL;
	line = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
	{
		// free(keep_line);
		keep_line = NULL;
		return (NULL);
	}
	else
	{
		keep_line = read_fd(fd, keep_line);
		if (!(ft_strchr(keep_line, '\n') != 0))
				return (line = keep_line, keep_line = NULL, line);
		line = get_that_line(keep_line);
		// temp = ft_strdup(ft_strchr(keep_line, '\n'));
		// free(keep_line);
		// keep_line = malloc(sizeof(char) * ft_strlen(ft_strchr(keep_line, '\n')) + 1 );
		temp = ft_strdup(ft_strchr(keep_line, '\n'));
		// free(keep_line);
		keep_line = temp;
		// free(temp);
		
		// free(buffer_clean);
	}
	return (line);
}

int main()
{
	int fd;
 	char *str;
 	fd = open("file.txt", O_RDONLY);
 	str = get_next_line(fd);
	printf("MAIN :%s",str);
	free(str);
	str = get_next_line(fd);
	printf("MAIN :%s",str);
	free(str);
	str = get_next_line(fd);
	printf("MAIN :%s",str);
	free(str);
	// str = get_next_line(fd);
	// printf("MAIN :%s",str);
	// free(str);
	// str = get_next_line(fd);
	// free(str);
	// while (str != NULL)
	// {
	// 	printf("MAIN:%s",str);
	// 	free(str);
	// 	str = get_next_line(fd);
	// }
	// printf("MAIN:%s\n",str);
}

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
