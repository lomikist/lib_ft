#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n){
	unsigned char *str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return (unsigned char *)str;
		str++;
		n--;
	}
	return (0);
}