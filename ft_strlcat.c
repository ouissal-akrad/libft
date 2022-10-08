#include "libft.h"
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t slen;
    size_t dlen;
    i = 0;
    j = 0;
    while (dest[i])
        i++;
    slen = ft_strlen(src);
    dlen = i;
    if (size == 0 || size <= dlen)
		return (slen + size);
    while (src[j] && j < (size - dlen - 1))
    {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return(slen + dlen);
}
int main()
{
    char src[10] = "wissal";
    char dest[10] = "akrad";
    printf("%zu | %s",ft_strlcat(dest,src,12),dest);
}