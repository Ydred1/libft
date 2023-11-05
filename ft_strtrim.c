/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydred <ydred@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:54:05 by nmillier          #+#    #+#             */
/*   Updated: 2023/11/05 10:35:41 by ydred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charset(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstring;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_charset(s1[start], (char *) set))
		start++;
	while (end >= start && ft_charset(s1[end], (char *) set))
		end--;
	newstring = ft_substr(s1, (unsigned int) start, (size_t)(end - start + 1));
	if (newstring == NULL)
		return (NULL);
	return (newstring);
}
