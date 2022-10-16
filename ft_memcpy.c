/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:41:57 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/13 21:51:55 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n--)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}

// int main()
// {
//     char dest[20] = "wissal";
//     char src[6] = "aharib";

// }
