/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:42:09 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/26 18:41:19 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <strings.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;
	unsigned char	*t;

	t = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		t[i] = x;
		i++;
	}
	return (ptr);
}
