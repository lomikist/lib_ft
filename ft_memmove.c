#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char* srccp = (unsigned char *)src;
	unsigned char* str = dest;

	if ((srccp == NULL) || (str == NULL))
        return NULL;
	if (n == 0)
		return (dest);
	i = 0;
	if ((src < dest) && ((src + n) > dest))
	{
		while (i < n)
		{
			i++;
			*str++ = *srccp++;
		}
	} 
	else {
		while (i < n)
		{
			i++;
			*str++ = *((unsigned char *)src++);
		}
	}
	
	return (dest);
}
