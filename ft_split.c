/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:54:38 by nmillier          #+#    #+#             */
/*   Updated: 2023/11/05 11:59:06 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cw(char const *s, char c, int *start, int *end)
{
	char	*string;
	int		nb;
	int		flag;

	string = (char *)s;
	nb = 0;
	flag = 1;
	*start = 0;
	*end = 0;
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
	int		i[3];

	tab = (char **) malloc((ft_cw(s, c, &i[0], &i[1]) + 1) * sizeof(char **));
	if (tab == NULL)
		return (NULL);
	i[2] = 0;
	while (s[i[0]])
	{
		while ((s[i[0]] == c && s[i[0]]) || i[0] < i[1])
			i[0]++;
		while ((s[i[1]] != c && s[i[1]]) || i[1] < i[0])
			i[1]++;
		if (s[i[0]])
			tab[i[2]++] = ft_substr(s, i[0], i[1] - i[0]);
		if (tab[i[2]] && (tab[i[2] - 1] == NULL))
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
