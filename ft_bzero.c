#include"libft.h"
void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
int main()
{
    char s[7]= "wissal";
    ft_bzero(s,2);
    printf("%c",s[3]);
}