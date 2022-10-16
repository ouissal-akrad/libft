/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:58:49 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/14 12:28:27 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	i_st;
	size_t	i_end;

	if (!s1 || !set)
		return (NULL);
	i_st = 0;
	i_end = ft_strlen(s1);
	while (s1[i_st] && check_set(s1[i_st], set))
		i_st++;
	while (i_end > i_st && check_set(s1[i_end - 1], set))
		i_end--;
	str = (char *)malloc(sizeof(*s1) * (i_end - i_st + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i_st < i_end)
		str[i++] = s1[i_st++];
	str[i] = '\0';
	return (str);
}
// int main() 
// {
//     char *s = ft_strtrim("ssssss", "s");
//     printf("%s\n",s);
//     free(s);
// }