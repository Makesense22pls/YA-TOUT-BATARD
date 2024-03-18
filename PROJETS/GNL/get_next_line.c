/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:53:51 by mafourni          #+#    #+#             */
/*   Updated: 2024/03/17 21:01:05 by mafourni         ###   ########.fr       */
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

char	*ft_strtrim(char const *s)/*, char const *set*/
{
	char	*copie;
	size_t	i;
	size_t	debut;
	size_t	end;
	size_t	len;

	i = 0;
	debut = 0;
	end = ft_strlen(s);
	if (!s)
		return (NULL);
	while (s[debut] != '\n' && s[debut] != '\0')
		debut++;
	// debut += 1 pou skip le \n;
	debut += 1;
	len = 0;
	if (end > debut)
		len = end - debut;
	copie = malloc(sizeof(char) * (len + 1));
	if (!copie)
		return (NULL);
	while (debut < end)
		copie[i++] = s[debut++];
	copie[i] = '\0';
	// printf("Test buffer apres trim:%s\n", copie);
	return (copie);
}

char	*get_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (stash == NULL)
		return (NULL);
	while (stash[i] != '\n' && stash[i] != '\0')
	{
		i++;
	}
	// On fait i++ apres le while pour skip le \n de la fin de la ligne,
	// alternatve a "+2" dans le malloc
	i++;
	// printf("%s", &stash[i]);
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	ft_strlcpy(line, stash, i + 1);
	// printf("Print de line dans get line: %s\n", line);
	if (!line)
		return (NULL);
	return (line);
}

char	*read_fd(int fd, char *buffer)
{
	char	stash[BUFFER_SIZE + 1];
	int		count;

	count = 1;
	while (!(ft_strchr(buffer, '\n')) && count != 0)
	{
		count = read(fd, stash, BUFFER_SIZE);
		if (count == -1)
			return (NULL);
		stash[count] = '\0';
		buffer = ft_strjoin(buffer, stash);
	}
	// printf("%s\n\n", buffer);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd <= 0)
		return (NULL);
	else
	{
		buffer = read_fd(fd, buffer);
		if (!buffer)
		{
			free(buffer);
			return (NULL);
		}
		line = get_line(buffer);
		// printf("check :%s\n\n\n", buffer);
		buffer = ft_strtrim(buffer /*, "\n"*/);
		// printf("check2 :%s\n\n\n", buffer);
	}
	return (line);
}

// int main(int argc, char **argv)
// {
// 	int fd;
// 	fd = open("file.txt", O_RDONLY);
// 	char *str = get_next_line(fd);
// 	printf("%s", str);
// 	str = get_next_line(fd);
// 	printf("%s", str);
// 	str = get_next_line(fd);
// 	printf("%s", str);
// 	str = get_next_line(fd);
// 	printf("%s", str);
// }

// int main()
// {
// 	char *str = "oui\nNeu3ei";
// 	printf("%s\n",ft_strtrim(str));
// 	return (0);
// }