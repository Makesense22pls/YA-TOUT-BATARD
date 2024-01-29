#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	compteur(char c)
{
	int repeat;
	repeat = 0;
	
	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int argc, char **argv)
{
	int repeat;
	int i;

	if(argc == 2)
		{
		while(argv[1][i])
			{
				i = 0;
				repeat = compteur(argv[1][i])
				while (repeat--)
				{
					write(1, &argv[1][i], 1);
					i++;
				}
			}
		}
	ft_putchar('\n')
	return (0);
}