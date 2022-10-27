/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:27:20 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/26 18:40:16 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*pnt;

	if (SIZE_MAX / size < nitems
		|| SIZE_MAX / nitems < size)
		return (NULL);
	pnt = (void *)malloc(nitems * size);
	if (!pnt)
		return (NULL);
	ft_bzero(pnt, nitems * size);
	return (pnt);
}
