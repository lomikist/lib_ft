#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	char *str;

	str = (char *)s;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return (&str[len]);
		len--;
	}
	return (0);
}	

// #include <stdio.h>
// int main()
// {
// 	char *c = "fsdfsdfsd sdafsdf sdf sdf sdf s dfdfdfdf     f";
// 	c = ft_strrchr(c, 'a');
// 	puts(c);
// }