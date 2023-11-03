/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydred <ydred@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:53:31 by nmillier          #+#    #+#             */
/*   Updated: 2023/11/03 22:56:20 by ydred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	char	*ptr;
	int		i;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstring = (char *) malloc(len * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	ptr = newstring;
	i = 0;
	while (s1[i])
		*ptr++ = s1[i++];
	i = 0;
	while (s2[i])
		*ptr++ = s2[i++];
	*ptr = '\0';
	return (newstring);
}
