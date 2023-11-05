/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmillier <nmillier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:14:51 by nmillier          #+#    #+#             */
/*   Updated: 2023/10/31 21:10:08 by nmillier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	string[11];
	int		i;
	int		digit;

	i = 0;
	digit = 1000000000;
	if (n != 0)
	{
		while (n / digit % 10 == 0)
			digit /= 10;
		if (n < 0)
			string[i++] = '-';
		while (digit >= 1)
		{
			if (n < 0)
				string[i++] = ((n / digit % 10) * -1) + 48;
			else
				string[i++] = (n / digit % 10) + 48;
			digit /= 10;
		}
		string[i] = '\0';
		write(fd, string, ft_strlen(string));
	}
	else
		write(fd, "0", 1);
}
