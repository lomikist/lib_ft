int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d",isalnum('3'));
//     printf("%d",ft_isalnum('3'));
//     printf("%d",isalnum('k'));
//     printf("%d",ft_isalnum('k'));
//     printf("%d",isalnum(']'));
//     printf("%d",ft_isalnum(']'));
//     printf("%d",isalnum('$'));
//     printf("%d",ft_isalnum('$'));
//     printf("%d",isalnum(' '));
//     printf("%d",ft_isalnum(' '));
// }