#include"libft.h"
#include<stdlib.h>
int ft_atoi(const char *str)
{
    int i;
    int sign;
    int value;

    i = 0;
    sign = 1;
    value = 0;

    while (str[i] <= 32)
        i++;
    if(str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        value = value * 10 + str[i] - '0';
        i++;
    }
    return (value * sign);
}
int main()
{
    printf("%d\n",ft_atoi("       -1235abc"));
    printf("%d",atoi("       -1235abc"));
}
