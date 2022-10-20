/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:42:09 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/17 09:29:32 by ouakrad          ###   ########.fr       */
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
// int main()
//  {
//    char s[7] = "wissal";
//     printf("%s",ft_memset(s,'$',5));
//     int t[3] = {0,1, 2};
//     memset(t,1, sizeof(t));
//     printf("%d\n", t[0]);
//  }

// int main() 
// {
//     char *a = malloc(1);
//     ft_memset(a, 'a', 10);
// 	a[9] = 'b';
//     printf("%c\n", a[2]);
// }
