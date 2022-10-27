/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouakrad <ouakrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:50:54 by ouakrad           #+#    #+#             */
/*   Updated: 2022/10/26 18:40:57 by ouakrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*ls;

	new = NULL;
	if (!(f) || !lst)
		return (NULL);
	while (lst)
	{
		ls = ft_lstnew((*f)(lst->content));
		if (!ls)
			ft_lstclear(&new, (*del));
		ft_lstadd_back(&new, ls);
		lst = lst->next;
	}
	return (new);
}
