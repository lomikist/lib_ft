void*	ft_memset(void *dest, int c, unsigned int len)
{
	int i;
	unsigned char* str = dest;

	i = 0;
	while (i < len)
	{
		i++;
		*str++ = c;
	}
	return dest;
}

#include <string.h>
#include <stdio.h>
int main()
{
	char str[50];

	strcpy(str, "This is string.h library function");
	puts(str);

	// memset(str, 'g', 5);
	puts(ft_memset(str, 'g', 5));

}