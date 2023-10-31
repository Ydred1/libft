/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:52:53 by nmillier          #+#    #+#             */
/*   Updated: 2023/10/31 18:01:06 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstring;
	long unsigned	i;

	i = 0;
	newstring = (char *) malloc((len + 1) *sizeof(char));
	if (!newstring)
		return (NULL);
	while (i < len)
	{
		newstring[i] = s[start + i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}