#include <stdlib.h>
#include <string.h>
#include <stddef.h>

static int int_size(int n);
static char* str_reverse(char *str);

char *ft_itoa(int n)
{
	int size;
	char *str;
	int i;

	size = int_size(n);
	if (!(str = (char *)malloc(size + 1)))
		return (NULL);
	i = 0;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		i++;
		n /= 10;
	}
	str[i] = '\0';
	str_reverse(str);
	return (str);
}

static int int_size(int n)
{
	int len;

	len = 0;
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


int main()
{
	char *result = ft_itoa(1235);

	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		fprintf(stderr, "Memory allocation failed.\n");
	}
	return (0);
}
