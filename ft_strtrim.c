#include <stdlib.h>
// char * ft_strchr(const char *s, int c);
// char * ft_strrchr(const char *s, int c);
// char * ft_substr(char const *s, unsigned int start, size_t len)
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

static unsigned int    ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}


static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
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

char * ft_strchr(const char *s, int c)
{
    unsigned int i;
    char * str;

    str = (char *)s;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return &str[i];
        }
        i++;
    }
    return 0;
}

char * ft_strrchr(const char *s, int c)
{
    unsigned int i;
    char * str;

    str = (char *)s;
    i = 0;
    while (str[i] != '\0')
        i++;
    while (i > 0)
    {
        if (str[i] == c)
        {
            return &str[i];
        }
        i--;
    }
    
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;

    start = 0;
    end = ft_strlen((char *)s1);
    while (ft_strchr(set, (int)s1[start]))
        start++;

    while (ft_strrchr(set, (int)s1[end]))
        end--;

    return ft_substr(s1, start, end - start + 1);
}

int main(){
    const char *str1 = "dfdfdfdfdffffffhellffffffffffdddddddddd";
    
    str1 = ft_strtrim(str1,"fd");
    printf("%s", str1);
}