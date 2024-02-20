#include <stdio.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd);

int main()
{
	int fd;
	fd = open("beber.c", O_RDWR);
	ft_putchar_fd(90, fd);
	return(0);
}