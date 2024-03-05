/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAIN_LIBFT.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:06:58 by mafourni          #+#    #+#             */
/*   Updated: 2024/02/25 16:03:37 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bzero	;
// int main()
// {
// 	char s [] = "WESH LA TEAM";
// 	size_t n = 7;
// 	printf("%s\n", ft_bzero(s, n));
// 	return (0);
// }
calloc	;
// int	main()
// {
// 	size_t count = 3;
// 	size_t size = 4;
// 	printf("%s\n", ft_calloc(count, size));
// 	printf("%s\n", calloc(count, size));
// 	return(0);
// }
itoa ;
// int main()
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return(0);
// }
memchr ; 
// #include "libft.h"

// int main(void)
// {
//     const char str[] = "bonjour";
//     int c = 'j';
//     size_t n = 6;

//     printf("%s\n",ft_memchr(str, c, n));
// 	printf("%s\n",memchr(str, c, n));

//     return 0;
// }
memcmp	;
// int main()
// {
// 	unsigned char s1 [200];
// 	unsigned char s2 [0];
// 	printf("%i\n", ft_memcmp(s1, s2, 2));
// 	printf("%i\n", memcmp(s1, s2, 2));
// 	return (0);
// }
memcpy	;
// int main()
// {
// 	char dst [] = "world Heloo";
// 	char src [] = "WESH";
// 	printf("%s\n", ft_memcpy(dst, src, 3));
// 	printf("%s\n", memcpy(dst, src, 3));
// 	return (0);
// }
// void *ft_memcpy(void *dst, const void *restrict src, size_t n)
// {
// 	unsigned int i;
// 	unsigned char *char_dst;
// 	unsigned char *char_src; 

// 	i = 0;
// 	char_src = (unsigned char *) src;
// 	char_dst = (unsigned char *) dst;
// 	if(!dst || !src)
// 		return (0);
// 	i = 0;
// 	while (i < n)
// 	{
// 		char_dst[i] = char_src[i];
// 		i++;
// 	}
// 	return (dst);
// }
memset	;
// int main(void)
// {
//     char str[20] = "Hello, World!";
//     size_t len = strlen(str);

//     printf("Before memset: %s\n", str);
    
//     // Fill the first 5 characters of str with 'X'
//     ft_memset(str, 'X', 5);

//     printf("After memset: %s\n", str);

//     return 0;
// }
putstrfd	;
// *address => data
// s[i] = *(address + i)
// int main ()
// {
// 	int fd;
// 	fd = open("beber.c", O_RDWR);
// 	printf("%d", fd);
// 	char s [] = "TAMERE";
// 	ft_putstr_fd(s, fd);
// 	return(0);
// }
split	;
// int main()
// {
// 	char *s = "^^^1^^2a,^^^^3^^^^--h^^^^";
// 	char *s = "lol mdr lol";
// 	char **v = ft_split(s, 94);
// 	while (*v)
// 	{
// 			printf("%s\n", *v);
// 			free(*v);
// 			*v++;
// 	}
// 	free(v);
// 	return (0);
// }
strchr	;
// int main()
// {
// 	int c;
// 	c = 'o';
// 	printf("%s\n",ft_strchr("bonjour",c));
// 	printf("%s\n",strchr("bonjour",c));
// 	return(0);
// }
strdup	;
// int	main()
// {
// 	char *s1;
// 	s1 = NULL;
// 	printf("%s\n", ft_strdup(s1));
// 	printf("%s\n", strdup(s1));
// }
strjoin	;
// int	main()
// {
// 	printf("%s\n", ft_strjoin("",""));
// 	return (0);
// }
strlcat	;
// int	main()
// {
// 	char dst[10] = "t";
// 	char src[10] = "estb";
// 	char dst1[10] = "t";
// 	char src1[10] = "estb";
// 	int n = 4;
// 	printf("%zu\n", ft_strlcat(dst, src,n));
// 	printf("%s\n", dst);
// 	printf("%zu\nVRAI:", strlcat(dst1, src1, n));
// 	printf("%s\n", dst1);
// 	return(0);
// }
strlcpy	;
// int main() 
// {
//     char src[] = "MAXENCE";
//     char dst[1]; // Taille suffisante pour contenir "MAXENCE" + '\0'

//     size_t len = ft_strlcpy(dst, src, sizeof(dst));
// 	strlcpy(dst, src, sizeof(dst));

//     printf("Source : %s\n", src);
//     printf("Destination : %s\n", dst);
//     printf("Longueur de src: %zu\n", len);

//     return 0;
// }
strmapi	;
// char ft_isalphawan(unsigned int cheh, char c)
// {
// 	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
// 		c = '0';
// 	return (c);
// }

// int main()
// {
// 	char str [] = "HELLO";
// 	printf("%s\n", ft_strmapi(str, ft_isalphawan));
// 	return(0);
// }
strnstr	; 
// int	main()
// {
// 	printf("Oe:%s\n", ft_strnstr("HEWLLOWORLDIOIOI", "WO", 7));
// 	printf("Oererwerw:%s\n", strnstr("HEWLLOWORLDIOIOI", "WO", 7));
// }

// char	*ft_strstr(char *str, char *to_find)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	if (str[0] == '\0' && to_find[0] == '\0')
// 		return (str);
// 	if (str[0] == '\0')
// 		return (NULL);
// 	while (str[i] != '\0')
// 	{
// 		j = 0;
// 		while (to_find[j] == str[i + j] && to_find[j] != '\0')
// 		{
// 			j++;
// 		}
// 		if (to_find[j] == '\0')
// 		{
// 			return (str + i);
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }
strchr	;
// int main()
// {
// 	char s [] = "Hello World";
// 	printf("%s\n", ft_strrchr(s, 'H'));
// 	printf("%s\n", strrchr(s, 'H'));
// 	return (0);
// }
strrchr	; 
// int main()
// {
// 	char *s1 = "aaaaa";
// 	char *set = "a";
// 	printf("%s\n", ft_strtrim(s1, set));
// }
substr	;
// int main()
// {
// 	const char s [] = "Maxence est con";
// 	unsigned int start = 3;
// 	size_t len = 14;
	
// 	printf("%s\n", ft_substr(s, start, len));
// }