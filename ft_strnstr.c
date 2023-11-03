/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydred <ydred@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:49:32 by nmillier          #+#    #+#             */
/*   Updated: 2023/11/03 22:52:53 by ydred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	littlelen;

	b = (char *) big;
	l = (char *) little;
	littlelen = ft_strlen(little);
	if (*little == '\0')
		return ((char *) big);
	while (*b && len-- >= littlelen)
	{
		if (ft_strncmp(b, l, littlelen) == 0)
			return (b);
		b++;
	}
	return (NULL);
}
