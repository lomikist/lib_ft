#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = malloc(len + 1);
	i = 0;
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = *(s + start + i);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     char * s1 = "12344566789";
//     char * s2;

//     s2 = ft_substr(s1, 4, 5);
//     printf("%s",s2);
// }