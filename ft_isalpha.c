/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:47:20 by nmillier          #+#    #+#             */
/*   Updated: 2023/10/17 14:50:52 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c < 65 || c > 90) && (c < 97 || c > 122))
        return (0);
    else
        return (1);
}