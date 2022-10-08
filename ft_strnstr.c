#include"libft.h"
#include <string.h>
char *ft_strnstr (const char *s, const char *to_find, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (to_find == NULL || s == NULL)
        return NULL;
    while (s[i] && *to_find && i < n)
        {
            if (s[i] == to_find[j] && to_find[j])
            {
                while (to_find[j] && to_find[j] == s[i + j])
                    j++;
                if (!to_find[j] && i + j < n)
                    return ((char *)s + i);
                j = 0;
            }
            i++;
        }
    return NULL;
    // while (s && n)
    // {
    //     if (strncmp(s,tf,len(tf)))
    //         return s;
    //     s++ ;
    //     n--;
    // }
}

int main()
{
    const char *s = "TutorialsPoint";
    char *to_find = "ial";
    printf("%s\n",ft_strnstr(s,to_find,6));
    printf("%s",strnstr(s,to_find,6));
    return 0;
}