#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	unsigned int	k;

	j = 0;
	i = ft_strlen(dest);
	k = ft_strlen(src);
	if (i + k > size)
		return (k + size);
	while (src[j] != '\0' && (j + i) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + k);
}

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char src[40] = "lalsdfsdfsdfa";

	char dest[80] = "catscats";
	char dest2[80] = "catscats";
	
	int result = strlcat(dest, src, 3);
	int result2 = ft_strlcat(dest2, src, 3);	

	printf("his --%d-----%s----\n", result,dest); 
	printf("my  --%d-----%s----\n", result2, dest2);
}*/
