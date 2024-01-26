#include <stdlib.h>

static unsigned int    ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	result = malloc(i);
	if (result == NULL)
		return NULL;	
	while (src[j] != '\0')
	{
		result[j] = src[j];
		j++;
	}
	result[j] = '\0';
	return (&result[0]);
}


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

char **ft_split(char const *s, char c)
{
    
}