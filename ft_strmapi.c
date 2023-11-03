/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydred <ydred@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:13:05 by nmillier          #+#    #+#             */
/*   Updated: 2023/11/03 22:53:56 by ydred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = ft_strdup(s);
	if (cpy == NULL)
		return (NULL);
	while (s[i])
	{
		cpy[i] = f((unsigned int) i, s[i]);
		i++;
	}
	return (cpy);
}
