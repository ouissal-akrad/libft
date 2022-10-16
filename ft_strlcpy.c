/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:42:26 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/14 10:52:14 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

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
	return (len);
}

// int main()
// {
//      char src[] = "wissal";
//     char dst[] = "qqqq";
//     printf("%zu | %s\n",ft_strlcpy(dst,src,4),dst);
//     printf("%zu | %s\n",strlcpy(dst,src,4),dst);
// }