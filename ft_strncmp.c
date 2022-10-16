/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:42:37 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/14 10:54:01 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp( const char *s1, const char *s2, size_t n )
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]) && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

// int main()
// {
//     char *s1 = NULL;
//     char *s2 = NULL;
//     printf("%d",ft_strncmp(s1,s2,2));
// }