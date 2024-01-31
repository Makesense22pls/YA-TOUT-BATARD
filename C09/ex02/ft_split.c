/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:49:49 by maxencefour       #+#    #+#             */
/*   Updated: 2024/01/30 11:58:54 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (-1);
}

int change_sep(char *str, char *charset) 
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (check_charset(str[i], charset) == 0)
			str[i] = 0;
		i++;
	}
	return (i);
}

int count_words(char *str, int len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < len)
	{
		if (str[i] != 0)
		{
			count++;
			while (str[i] != 0 && i < len)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*get_word(char *str, int *i, int len)
{
	char	*word;
	int		ci;
	int		ccount;

	ccount = 0;
	while (i[1] < len)
	{
		if (str[i[1]] != 0)
		{
			while (str[i[1] + ccount] != 0)
				ccount++;
			break ;
		}
		i[1] += 1;
	}
	if (ccount == 0)
		return (NULL);
	word = (char *) malloc(sizeof(char) * ccount + 1);
	if (word == NULL)
		return (word);
	word[ccount] = 0;
	ci = 0;
	while (ci < ccount)
	{
		word[ci] = str[i[1] + ci];
		ci++;
	}
	i[1] += ci;
	return (word);
}

char **ft_split(char *str, char *charset)
{
	char **rt;
	int	i[2];
	int	len;
	int	wcount;
	
	len = change_sep(str, charset);
	wcount = count_words(str, len);
	rt = (char **) malloc(sizeof(char *) * wcount + 1);
	if (rt == NULL)
		return (NULL);
	rt[wcount] = 0;
	i[0] = 0;
	i[1] = 0;
	while (i[0] < wcount)
	{
		rt[i[0]] = get_word(str, i, len);
		if (rt[i[0]] == NULL)
			return (NULL);
		i[0]++;
	}
	return (rt);
}

int main(int ac, char **av) {
	char **rt;
	int	i;
    
	(void)(ac);
	rt = ft_split(av[1], av[2]);
	i = 0;
	while (rt[i] != 0)
	{
		printf("%s\n", rt[i]);
		i += 1;
	}
    return 0;
}
