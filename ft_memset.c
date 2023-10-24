/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:48:01 by nmillier          #+#    #+#             */
/*   Updated: 2023/10/18 12:14:07 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *memset(void *s, int c, size_t n)
{
    int index;

    index = 0;
    while (n-- > 0)
        s[index++] = c;
    return (s);
}