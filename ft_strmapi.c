/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:22:35 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/17 20:08:13 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int len;
	unsigned int i;
	char *result;
	
	len = ft_strlen(s);
	i = 0;
	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * len  + 1);
	if(!result)
		return (NULL);
	while (i < len)
	{
		result[i] = (f)(i,s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char f(unsigned int i, char c)
// {
// 	(void) i;
// 	char x = ft_toupper(c);
// 	return x;
// }

// int main()
// {
//     char str[10] = "abcd";
//     printf("before %s\n", str);
//     printf("after %s\n", ft_strmapi(str, f)); 
//     return 0;
// }