#include <stdlib.h>
#include "libft.h"
// char * ft_strchr(const char *s, int c);
// char * ft_strrchr(const char *s, int c);
// char * ft_substr(char const *s, unsigned int start, size_t len)

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;

    start = 0;
    end = ft_strlen(s1);
    while (ft_strchr(s1, (int)set[start]))
        start++;

    while (ft_strrchr(s1, (int)set[end]))
        end--;

    return ft_substr(s1, start, end - start + 1);
}