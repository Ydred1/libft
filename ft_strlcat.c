/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:40:47 by nmillier          #+#    #+#             */
/*   Updated: 2023/11/03 13:39:09 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	index_dest;
	unsigned int	index_src;

	index_dest = 0;
	index_src = 0;
	while (dst[index_dest] != '\0')
		index_dest++;
	while (src[index_src] != '\0' || size - index_dest - 1 > 0)
	{
		dst[index_dest + index_src] = src[index_src];
		index_src++;
	}
	return (index_src);
}
