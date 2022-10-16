/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:42:20 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/14 10:51:40 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	i = 0;
	while (dest[i])
		i++;
	slen = ft_strlen(src);
	dlen = i;
	if (size == 0 || size <= dlen)
		return (slen + size);
	j = 0;
	while (src[j] && j < (size - dlen - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (slen + dlen);
}
// int main()
// {
//     char src[10] = "1337";
//     char dest[10] = "";
//     printf("%zu | %s",ft_strlcat(dest,src,11),dest);
// }