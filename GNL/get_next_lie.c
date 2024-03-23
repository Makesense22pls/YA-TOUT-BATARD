/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_lie.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:51 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/23 17:41:03 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// #define TRUE 1
// #define FALSE 0

// int	ft_sameoupas(char const c, char const *set)
// {
// 	if (set == NULL)
// 		return (FALSE);
// 	while (*set != '\0')
// 	{
// 		if (c == *set)
// 			return (TRUE);
// 		set++;
// 	}
// 	return (FALSE);
// }

char	*ft_strtrim(char	*s)/*, char const *set*/
{
	char	*copie;
	t_data d;

	d.i = 0;
	d.debut = 0;
	d.end = ft_strlen(s);
	if (!s)
		return (NULL);
	while (s[d.debut] != '\n' && s[d.debut] != '\0')
		d.debut++;
	// debut += 1 pou skip le \n;
	d.debut += 1;
	d.len = 0;
	if (d.end > d.debut)
		d.len = d.end - d.debut;
	copie = malloc(sizeof(char) * (d.len + 1));
	if (!copie)
	{
		free(copie);
		return NULL;
	}	
	while (d.debut < d.end)
		copie[d.i++] = s[d.debut++];
	copie[d.i] = '\0';
	free(s);
	// printf("Test buffer apres trim:%s\n", copie);
	return (copie);
}

char	*get_that_line(char *stash)
{
	char	*line;
	int		i;

	line = NULL;
	i = 0;
	if (stash == NULL)
		return (NULL);
	while (stash[i] != '\n' && stash[i] != '\0')
	{
		i++;
	}
	// if (i != '\0')
		i++;
	// On fait i++ apres le while pour skip le \n de la fin de la ligne,
	// alternatve a "+2" dans le malloc
	// printf("%s", &stash[i]);
	if (!line)
		line = malloc(sizeof(char) * (i+ 1));
	else
		line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	line [i+1] = '\0';
	// if (line[i-1] == '\n')
	// {
	// 	free(line);
	// 	return (NULL);
	// } NE CAHNGE A RIEN 
	// if (line[i] == '\n' && line[i + 1] == '\0')
	// {
	// 	free(line); 
	// 	return (NULL);
	// } CHANGE RIEN AUSSI
	ft_strlcpy(line, stash, i + 1);
	// printf("Print de line dans get line: %s\n", line);
	return (line);
}

char 	*read_fd(int fd, char *buffer)
{
	char	*stash;
	int		count;
	char	*temp;

	count = 1;
	temp = ft_strdup(buffer);
	free(buffer);
	while (!(ft_strchr(temp, '\n')) && count != 0)
	{
		stash = malloc(BUFFER_SIZE + 1);
		count = read(fd, stash, BUFFER_SIZE);
		if (count == -1 || (stash[0] == '\0'))
		{
			free(stash);
			return (NULL) ;
		}
		stash[count] = '\0';
		if (!temp)
			temp = ft_strdup(stash);
		else
			temp = ft_strjoin(temp, stash);
		free (stash);
	}
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	line = NULL;
	if (BUFFER_SIZE <= 0 || fd <= 0 || read(fd,0,0) < 0)
		return (NULL);
	else
	{
		buffer = read_fd(fd, buffer);
		// if (!buffer)
		// {
		// 	free(buffer);
		// 	return (NULL);
		// }
		line = get_that_line(buffer);
		// printf("check :%s\n\n\n", buffer);
		buffer = ft_strtrim(buffer /*, "\n"*/);
		if (!buffer)
			{
				free (buffer);
			}
		// printf("check2 :%s\n\n\n", buffer);
	}
	return (line);
}

 int main(void)
 {
 	int fd;
 	char *str;
 	fd = open("file.txt", O_RDONLY);
 	str = get_next_line(fd);
 	printf("%s", str);
 	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
// str = get_next_line(fd);
// printf("%s", str);
// free(str);
// 	 str = get_next_line(fd);
// 	 printf("%s", str);
// 	 free(str);
// 	 str = get_next_line(fd);
// 	 printf("%s", str);
// 	 free(str);
}

// int main()
// {
// 	char *str = "oui\nNeu3ei";
// 	printf("%s\n",ft_strtrim(str));
// 	return (0);
// }