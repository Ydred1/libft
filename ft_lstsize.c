/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydred <ydred@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 02:39:50 by ydred             #+#    #+#             */
/*   Updated: 2023/11/04 02:51:41 by ydred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		nb;
	t_list	*current;

	nb = 1;
	current = lst;
	if (lst == NULL)
		return (0);
	while (current->next)
	{
		current = current->next;
		nb++;
	}
	return (nb);
}
