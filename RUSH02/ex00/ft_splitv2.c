/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitv2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:08:06 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/28 15:26:40 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_index(char *str)
{
	int i;
	int result;

	result = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] = '\n')
		{
			result += 1;
		}
		i++;
	}
	return (result);
}

int ft_strlen(char *str)
{
	int a;

	a = 0;
	while(str[a])
	{
		if (str[a] == '\n')
			return (a);
		a += 1;
	}
	return (a);
}
char	**ft_split(char *str)
{
	
}
