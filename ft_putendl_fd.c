#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while(*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

int main(void)
{
	ft_putendl_fd("Hi stdout", 1);
	ft_putendl_fd("Hi error", 2);
	return (0);
}
