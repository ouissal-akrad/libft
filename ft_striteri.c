/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:06:52 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/19 15:33:16 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
// void f(unsigned int i, char *c)
// {
// 	write(1, &c[i], 1);
// }

// int main()
// {
//     char *str = "---123456";
//     printf("before %s\n", str);
//     ft_striteri(str, f);
//     return 0;
// }
