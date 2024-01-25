int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	int				diff;

	c = 0;
	diff = 0;
	while ((c < n) && !diff && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
		c++;
	}
	if (c < n && !diff && (s1[c] == '\0' || s2[c] == '\0'))
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
	return (diff);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "";	     
	char b[] = "";

	printf("my %d\n", ft_strncmp(a,b,3));
	printf("original %d\n", strncmp(a,b,3));
}*/
