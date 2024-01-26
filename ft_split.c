#include <stdlib.h>
#include "libft.h"
// char * ft_strchr(const char *s, int c);



void clear_mall(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(str[0]);
		i++;
	}
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**str;
	// char *str3[] = {"hell","worlds"};
	
	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			len++;
		i++;
	}
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return 0;
	i = 0;
	int index = 0;
	char *inn;
	while (i < len)
	{
		index = ft_strchr(s, c) - s;
		inn = malloc(sizeof(char) * index);
		if(!inn)
		{
			clear_mall(str, (i + 1));
			return 0;
		}
		inn = ft_substr(s, 0, ft_strchr(s, c) - s);
		str[i] = inn;
		s = ft_strchr(s, c) + 1;
		i++;
	}
	return str;
}


// #include <stdio.h>
// int main(){
//     // const char *str1 = "dfdfdfdfdffffffhellffffffffffdddddddddd";
//     char *s1 = "hello darkness my old firend ";
// 	char **s2;
//     // char *s2 = "Hello \t  Please\n Trim me !";

//     s2 = ft_split(s1,' ');
//     // str2 = ft_strtrim(str2," \n\t);
//     // puts(s1);
// }