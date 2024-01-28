#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *p;

	if (count && size && count > (4294967295 / size))
		return (0);
	p = malloc(count * size);
	if (!p)
	{
		free(p);
		return (0);
	}
	ft_bzero(p, count * size);
	return (p);
}

// #include <stdio.h>
// int main()
// {
//     char * str = ft_calloc(4, 4);
//     printf("%s", str);
// }