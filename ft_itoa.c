/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:41:41 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/26 18:40:30 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
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

static void	ft_fill(char *str, long cp, int count)
{
	if (cp == 0)
	{
		str[0] = '0';
		str[1] = 0;
	}
	else if (cp < 0)
	{
		str[0] = '-';
		cp *= -1;
	}
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
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, count + 1);
	ft_fill(str, cp, count);
	return (str);
}
