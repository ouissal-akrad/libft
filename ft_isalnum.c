#include"libft.h"
int ft_isalnum( int c )
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

int main()
{
    char c = '7';
    printf("%d",ft_isalnum(c));
}