/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:41:41 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/20 14:57:56 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>

int	ft_count(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_remplir(char *str, long cp, int count)
{
	if (cp == 0)
	{
		str[0] = '0';
		str[1] = 0;
	}
	if (cp < 0)
	{
		str[0] = '-';
		cp *= -1;
	}
	str[count] = 0;
	while (count - 1 >= 0 && str[count - 1] != '-')
	{
		str[count-- - 1] = '0' + (cp % 10);
		cp /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		count;
	long	cp;
	char	*str;

	cp = n;
	count = ft_count(n);
	str = malloc(sizeof(char) * count + 1);
	if (!str)
		return (NULL);
	ft_remplir (str, cp, count);
	return (str);
}
// int main()
// {
// 	char * s = ft_itoa(42);
// 	s = ft_itoa(-1);
// 	s = ft_itoa(42);
// 	printf("%s\n", s);
// }
