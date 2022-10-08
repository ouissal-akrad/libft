#include"libft.h"
#include<string.h>
void *ft_memmove( void * dest, const void * src, size_t n)
{
    unsigned char *tmp_dest;
    unsigned char *tmp_src;
    size_t i;
    i = -1;
    tmp_dest = (unsigned char *)dest;
    tmp_src = (unsigned char *)src;
    if (dest < src)
    {
        while (++i < n)
            tmp_dest[i] = tmp_src[i];
    }
    else
    {
        while (n)
        {
             tmp_dest[n - 1] = tmp_src[n - 1];
             n--;
        }
    }
    return(dest);
}

int main()
{
    char s[12] = "hello world";
    //memmove(s + 4,s, 6);
    ft_memmove(s + 4,s , 6);
    printf("%s",s);
}