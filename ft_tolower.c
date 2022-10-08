#include"libft.h"
int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

int main()
{
    char c = 'A';
    printf("%c",ft_tolower(c));
}
