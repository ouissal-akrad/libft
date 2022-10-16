/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:37:51 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/14 10:48:43 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *str)
{
	char	*ret;
	int		i;

	if (!str)
		return (NULL);
	ret = malloc((ft_strlen(str) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
// int main()
// {
//     char *str = "akrad";
//     char *s = ft_strdup(str);
//     printf("%s", s);
//     return 0;
// }
