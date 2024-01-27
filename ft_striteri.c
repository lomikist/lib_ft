#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    char    *str;
    int     i;

    i = 0;
	if (!s || !f)
		return ;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return ;
	i = 0;
	while (s[i])
	{
        f(i, &s[i]);
		str[i] = s[i];
		++i;
	}
	str[i] = '\0';
}