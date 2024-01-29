#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int	resultat;
	int comptesign;
	
	resultat = 0;
	comptesign = 1;
	
	while ((str[0] >= 9 && str[0] <= 13) || str[0] == 32)
		str++;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			comptesign = -1;
		str++;
	}
	while (str[0] >= '0' && str[0] <= '9')
	{
		resultat = resultat * 10 + (str[0] - '0');
		str ++;
	}
	return (resultat * comptesign);
}
int main()
{
	char str [] = "    -52y34ab567";
	printf("%i\n",ft_atoi(str));
	return (0);
}