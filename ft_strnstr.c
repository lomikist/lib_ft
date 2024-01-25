#include <stdio.h>
#include <string.h>

int	check(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0' && to_find[i] == str[i])
	{
		i++;
	}
	if (to_find[i] == '\0')
		return (1);
	return (0);
}

char * ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char *str = (char *)haystack;
	char *to_find = (char *)needle;
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			if (check(&str[i], &to_find[j]) == 1)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int main () {
   char str[30] = "";
   char searchString[10] = "how";
   char *result;
   char *result2;

   result = strstr(str, searchString);
   result2 = ft_strstr(str, searchString);
   printf("his	-%s-- \n", result);
   printf("my 	-%s-- \n", result2);
   return 0;
}*/
