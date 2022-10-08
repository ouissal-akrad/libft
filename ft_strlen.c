#include"libft.h"
size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    if (str == NULL)
        return 0;
    while (str[i])
        i++;
    return(i);
}

// int main()
// {
//     char *str = NULL;
//     int i;
//     i = ft_strlen(str);
//     printf("%d",i);
// }