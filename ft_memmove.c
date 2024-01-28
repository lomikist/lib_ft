#include <string.h>
#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (!dest && !src)
			return (dest);
	if (dest == src)
		return (dest);
	i = 0;
	if ((src <= dest) && ((src + n) >= dest))
	{
		while (n > 0)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	} 
	ft_memcpy(dest, src, n);
	
	return (dest);
}
