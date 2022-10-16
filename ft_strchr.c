/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:42:13 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/14 10:47:06 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}
// int main()
// {
//     char *str = "wissal";
//     char *pnt;
//     char c = 's';
//     pnt = ft_strchr(str,c);
//     printf("%s",pnt);
// }
