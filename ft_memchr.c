/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydred <ydred@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:45:21 by nmillier          #+#    #+#             */
/*   Updated: 2023/11/03 20:14:25 by ydred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	char	tosearch;

	a = (char *) s;
	tosearch = (char) c;
	while (n--)
	{
		if (*a == tosearch)
			return (a);
		a++;
	}
	return (NULL);
}
