#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

static int int_size(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;	
	}else if(n == 0)
	{
		return 1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char* str_reverse(char *str) {
    size_t length = strlen(str);
    size_t i = 0;
    size_t j = length - 1;

    if (str == NULL) {
        return NULL;
    }
    while (i < j)
	{
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

char *ft_itoa(int n)
{
	int size;
	char *str;
	int i;
	int sign;

	size = int_size(n);
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	if (!(str = (char *)malloc(size + 1)))
		return (NULL);
	i = 0;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		i++;
		n /= 10;
	}
	if (n == 0)
		str[0] = '0';
	if (sign == 1)
		str[i] = '-';
	str[i + 1] = '\0';
 	str_reverse(str);
	return (str);
}

// int main()
// {
// 	char *result = ft_itoa(0);

// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }