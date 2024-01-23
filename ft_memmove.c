void *ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char* str = dest;

	i = 0;
	if (dest > src)
	{
		
	} else if (src > dest)
	{
		
	} else {
		while (i < n)
		{
			i++;
			*str++ = src;
		}
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