#include"libft.h"
#include <string.h>
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len;
    i = 0;
    len = ft_strlen(src);
    if (size > 0)
    {
        while (src[i] && (i < (size - 1)))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return(len);
}
int main()
{
    char src[] = "wissal";
    char dst[] = "qqqq";
    printf("%zu | %s\n",ft_strlcpy(dst,src,2),dst);
    printf("%zu | %s\n",strlcpy(dst,src,2),dst);
}