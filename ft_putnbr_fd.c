#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	// char a[8];

	// a = (char *)n;
	// int		len;

	// a = ft_itoa(n);
	// len = ft_strlen(a);
	write(fd, &n, sizeof(n));
}