/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:43:26 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/17 11:08:12 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s,fd);
	write(fd,"\n",1);
}

// int main()
// {
//     int fd = open("putendl.txt", O_CREAT | O_RDWR | O_APPEND);
//     ft_putendl_fd("wissal",fd);
// }