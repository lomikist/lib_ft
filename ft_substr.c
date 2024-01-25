#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *str;

    i = 0;
    if (!(str = malloc(len)))
        return 0;
    while (s[start] != '\0' && i < len)
    {
        str[i] = s[start];
        start++;
        i++;
    }
    str[i] = '\0';
    return &str[0];
}

// int main()
// {
//     char * s1 = "12344566789";
//     char * s2;

//     s2 = ft_substr(s1, 4, 5);
//     printf("%s",s2);
// }