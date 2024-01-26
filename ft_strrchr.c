#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}

// char * ft_strrchr(const char *s, int c)
// {
//     unsigned int i;
//     char * str;

//     str = (char *)s;
//     i = 0;
//     while (str[i] != '\0')
//         i++;
//     while (i > 0)
//     {
//         if (str[i] == c)
//         {
//             return &str[i];
//         }
//         i--;
//     }
    
//     return 0;
// }