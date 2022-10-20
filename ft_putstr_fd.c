/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:14:34 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/17 12:46:49 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write (fd, &s[i++], 1); 
}

// int main()
// {
//     int fd = open("str.txt", O_CREAT | O_RDWR | O_APPEND);
//     ft_putstr_fd("akrad",fd);
// }