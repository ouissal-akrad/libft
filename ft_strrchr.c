/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:42:49 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/14 10:57:00 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr( const char *str, int c )
{
	int	i;

	i = ft_strlen(str);
	while (i > 0 && str[i] != (char)c)
	{
		i--;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (0);
}

// int main()
// {
//     //char *str = "wwwww";
//     char *pnt;
//     char c = 'o';
//     pnt = ft_strrchr(NULL,c);
//     printf("%s",pnt);
// }