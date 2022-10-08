#include"libft.h"
int ft_isdigit(int c)
{
    if (c >= 0 && c <= 9)
        return 1;
    return 0;
}
// int main()
// {
//     int c = 9;
//     printf("%d",ft_isdigit(c));
// }