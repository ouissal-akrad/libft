/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:41:49 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/13 21:45:53 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)str;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return (tmp + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
//     // char *str = "wissal";
//     int p[] = {4950, 4950, 4950}; // 4950 is {86, 19, 0, 0}
//     // char *pnt;
//     // char c = 's';
//     // pnt = ft_memchr(p, 86, 3);
//     printf("%s\n",ft_memchr(p, 86, sizeof(p)));
//     printf("%s\n",memchr(p, 86, sizeof(p)));
//     // printf("%s",pnt);
// }