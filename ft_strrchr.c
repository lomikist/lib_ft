#include "libft.h"

char * ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;
	char			*start;

	i = 0;
	if(!s)
		return "";
	start = (char *)s;
	str = (char *)s;
	while (*str != '\0')
		str++;
	while (*str != c && str != start)
		str--;
	if (*s == c)
		return ((char *)s);
	
	return str;	
}

#include <stdio.h>
int main()
{
	char *c = "fsdfsdfsd sdafsdf sdf sdf sdf s dfdfdfdf     f";
	c = ft_strrchr(c, 'a');
	puts(c);
}