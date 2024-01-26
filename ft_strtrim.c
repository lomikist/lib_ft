#include <stdlib.h>
#include "libft.h"
// unsigned int    ft_strlen(char *str);
// char * ft_strchr(const char *s, int c);
// char	* ft_strrchr(const char *s, int c);
// char	* ft_substr(char const *s, unsigned int start, size_t len);


char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;

    start = 0;
    if (!s1 || !set)
        return NULL;    
    end = ft_strlen((char *)s1);
    while (ft_strchr(set, (int)s1[start]))
        start++;
    while (ft_strrchr(set, (int)s1[end]))
        end--;
    if (start > end)
        return ft_substr(s1, start, 0);

    return ft_substr(s1, start, end - start + 1);
}

// #include <stdio.h>
// int main(){
//     // const char *str1 = "dfdfdfdfdffffffhellffffffffffdddddddddd";
//     char *s1 = "\t   \t \t\n\n\n\n\n \n\t\n \n  \n \n \n\t";
//     // char *s2 = "Hello \t  Please\n Trim me !";

//     s1 = ft_strtrim(s1," \t\n");
//     // str2 = ft_strtrim(str2," \n\t);
//     puts(s1);
// }