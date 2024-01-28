#include "libft.h"
#include <stdio.h>
#include <stddef.h>

void    *ft_memcpy(void * dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char *str;
   
	str = dst;
	i = 0;
	if (n == 0)
		return dst;	
	if (!dst && !src)
		return (dst);
	while(i < n)
	{
		str[i] = ((unsigned char *)src)[i];
		i++;	
	}
	return (dst);
}
