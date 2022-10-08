#include"libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *tmp_dst;
    unsigned char *tmp_src;
    tmp_dst = (unsigned char *)dst;
    tmp_src = (unsigned char *)src;
    while (n--)
        *tmp_dst++ = *tmp_src++;
    return (dst);
}
int main()
{
    char dest[8] = "wissal";
    char src[6] = "akrad";
    ft_memcpy(dest,src,8);
    printf("%s",dest);
}