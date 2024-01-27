#include <stdlib.h>
#include "libft.h"
// char * ft_strchr(const char *s, int c);

void clear_mall(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
}

static int	get_words_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}


char ** stick_arr(char **str, const char *s, char c, int len)
{
	int i;
	int inn_str_size;
	char *inn_str;
	
	i = 0;
	inn_str_size = 0;
	while (i < len)
	{
		while ((ft_strchr(s, c) - s) == 0)
			s++;
		inn_str_size = ft_strchr(s, c) - s;
		inn_str = ft_substr(s, 0, inn_str_size);
		if(inn_str == 0)
			clear_mall(str, len);
		str[i] = inn_str;
		s = ft_strchr(s, c) + 1;
		i++;
	}
	return str;
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**str;
	
	i = 0;
	len = 0;
	len = get_words_count(s, c);
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return 0;
	stick_arr(str, s, c, len);
	str[len] = NULL;
	return str;
}


// #include <stdio.h>
// int main(){
//     char *s1 = "      split       this for   me  !       ";
// 	char **s2;

//     s2 = ft_split(s1,' ');
// 	int i = 0;
// 	i++;
// }