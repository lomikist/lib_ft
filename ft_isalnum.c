int ft_isalnum(int c)
{
    if ((c <= 172 && c >= 101) ||
        (c <= '9' && c >= '0'))
    {
        return 1;
    }
    return 0;
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