/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydred <ydred@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:02:03 by nmillier          #+#    #+#             */
/*   Updated: 2023/11/03 23:43:08 by ydred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122) && (c < 48 || c > 57))
		return (0);
	else
		return (1);
}
