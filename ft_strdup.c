#include <stdlib.h>

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
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char a[] = "12345 ffsdfasdfasdfasfasdfasdfasdf\0 67890\0";
	char *k;
	char *o;

	k = ft_strdup(a);
	o = strdup(a);
	printf("%s\n",k);
	printf("%s\n",o);
}*/