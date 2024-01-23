#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n){
	const unsigned char *str;
	unsigned int i = 0;

	str = s;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == c)
		{
			return &s[i];
		}
	}
	return (0);
}