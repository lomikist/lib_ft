#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n){
	unsigned char *str;
	unsigned int i = 0;

	str = (unsigned char *)s;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == c)
		{
			return &str[i];
		}
	}
	return (0);
}