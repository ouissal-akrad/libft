#include"libft.h"
#include <string.h> 
char *ft_strchr(const char *str, int c)
{
    while (*str && *str != c)
        str++;
    if (*str == c)
        return ((char *)str);
    return 0;
}
int main()
{
    char *str = "wissal";
    char *pnt;
    char c = 's';
    pnt = ft_strchr(str,c);
    printf("%s",pnt);
}
