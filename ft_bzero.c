#include <stdlib.h>
void ft_bzero(void *dest, size_t len)
{
	unsigned long i;
	unsigned char* str = dest;

	i = 0;
	while (i < len)
	{
		i++;
		*str++ = 0;
	}
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char str[50];

	strcpy(str, "This is string.h library function");
	puts(str);

	// memset(str, 'g', 5);
    ft_bzero(str , 5);
	puts(str);
}*/
