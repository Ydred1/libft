/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:03:03 by nmillier          #+#    #+#             */
/*   Updated: 2023/10/21 11:38:49 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		index;

	ptr = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] == c)
		{
			ptr = (char *) s + index;
		}
		index++;
	}
	if (s[index] == c)
	{
		ptr = (char *) s + index;
	}
	return (ptr);
}
