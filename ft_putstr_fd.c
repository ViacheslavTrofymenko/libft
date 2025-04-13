#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	while(*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int main(void)
{
	ft_putstr_fd("Hi stdout\n", 1);
	ft_putstr_fd("Hi error\n", 2);
	return (0);
}
*/

