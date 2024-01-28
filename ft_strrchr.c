#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return (&s[len]);
		len--;
	}
	return (0);
}	

#include <stdio.h>
int main()
{
	char *c = "fsdfsdfsd sdafsdf sdf sdf sdf s dfdfdfdf     f";
	c = ft_strrchr(c, 'a');
	puts(c);
}