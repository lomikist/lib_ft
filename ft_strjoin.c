#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static unsigned int    ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


char    *ft_strjoin(char const *s1, char const *s2)
{
    int len1;
    int len2;
    char *str;

	if (!s1 || !s2)
		return  (NULL);	
    len1 = ft_strlen((char *)s1);
    len2 = ft_strlen((char *)s2);
    if(!(str = malloc(len1 + len2)))
        return 0;
    ft_strcpy(str, (char *)s1);
    ft_strcat(str, (char *)s2);
    
    return (str);
}