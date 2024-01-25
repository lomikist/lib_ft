#include <stdio.h>
#include <stdlib.h>
void *ft_calloc(size_t count, size_t size)
{
    void *po;

    if(!(po = malloc(size * count))){

    }
    return po;
}

// #include <stdio.h>
// int main()
// {
//     char * str = ft_calloc(4, 4);
//     printf("%s", str);
// }