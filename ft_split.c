/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:54:38 by nmillier          #+#    #+#             */
/*   Updated: 2023/10/31 22:57:17 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	char	*string;
	int		nb;
	int		flag;

	string = (char *)s;
	nb = 0;
	flag = 1;
	while (*string)
	{
		if (*string == c && flag == 0)
			flag = 1;
		if (*string != c && flag == 1)
		{
			nb++;
			flag = 0;
		}
		string++;
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i[3] = {0};

	tab = (char **) malloc((ft_countwords(s, c) + 1) * sizeof(char **));
	if (tab == NULL)
		return (NULL);
	while (s[i[0]])
	{
		while ((s[i[0]] == c && s[i[0]]) || i[0] < i[1])
			i[0]++;
		while ((s[i[1]] != c && s[i[1]]) || i[1] < i[0])
			i[1]++;
		if (s[i[0]])
			tab[i[2]++] = ft_substr(s, i[0], i[1] - i[0]);
		if (tab[i[2]] - 1 == NULL)
		{
			while (i[2]-- > 0)
				free(tab[i[2]]);
			free(tab);
			return (NULL);
		}
	}
	tab[i[2]] = (char *) NULL;
	return (tab);
}
