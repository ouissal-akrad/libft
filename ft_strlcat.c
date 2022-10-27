/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:42:20 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/26 18:41:50 by ouakrad          ###   ########.fr       */
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
	if (!dest && size == 0)
		return (0);
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
