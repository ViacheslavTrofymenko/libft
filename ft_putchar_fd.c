#include <unistd.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('i', 1);
	ft_putchar_fd('\n', 1);

	ft_putchar_fd('E', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('\n', 2);

	return (0);
}
*/
