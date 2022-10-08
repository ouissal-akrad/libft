#include"libft.h"
char *ft_strrchr( const char *str, int c )
{
    int i;
    i = ft_strlen(str) - 1;
    while (str[i] && str[i] != c)
        i--;
    if (str[i] == c)
        return ((char *)str + i);
    return 0;
}
int main()
{
    char *str = "wissal";
    char *pnt;
    char c = 's';
    pnt = ft_strrchr(str,c);
    printf("%s",pnt);
}