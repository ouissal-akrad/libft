/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:40:07 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/17 09:30:23 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	value;

	i = 0;
	sign = 1;
	value = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		// if (sign == 1 && value > value * 10 + str[i] - '0')
		// 	return (-1);
		// if (sign == -1 && value < value * 10 + str[i] - '0')
		// 	return (0);
		value = value * 10 + str[i] - '0';
		i++;
	}
	return ((value * sign));
}

// int main()
// {
//    printf("%d\n",ft_atoi("9223372036854775808"));
//     printf("%d\n", atoi("9223372036854775808"));
// }
