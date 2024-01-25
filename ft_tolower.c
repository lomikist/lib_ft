int	ft_tolower(int c)
{

	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <unistd.h>

int main()
{
	char a[] = "absdfFzzzzSDKLJ^*&%$sf";

	ft_strlowcase(a);
	write(1,a,23);
}*/