/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:50:40 by nmillier          #+#    #+#             */
/*   Updated: 2023/10/21 11:40:53 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		index;

	ptr = 0;
	index = 0;
	while (s[index] && ptr == 0)
	{
		if (s[index] == c)
		{
			ptr = (char *) s + index;
		}
		index++;
	}
	if (s[index] == c && ptr == 0)
	{
		ptr = (char *) s + index;
	}
	return (ptr);
}
