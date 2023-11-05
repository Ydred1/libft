/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydred <ydred@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 04:18:30 by ydred             #+#    #+#             */
/*   Updated: 2023/11/05 10:34:01 by ydred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_failedmalloc(t_list *lst, void (*del)(void *))
{
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;
	t_list	*currentnew;

	if (lst == NULL)
		return (NULL);
	current = lst;
	newlst = ft_lstnew(f(current->content));
	if (newlst == NULL)
		return (ft_failedmalloc(newlst, del));
	currentnew = newlst;
	while (current->next)
	{
		currentnew->next = ft_lstnew(f(current->next->content));
		if (currentnew->next == NULL)
			return (ft_failedmalloc(newlst, del));
		currentnew = currentnew->next;
		current = current->next;
	}
	return (newlst);
}
