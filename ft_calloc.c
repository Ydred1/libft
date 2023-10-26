/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydred <ydred@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:51:08 by nmillier          #+#    #+#             */
/*   Updated: 2023/10/25 20:14:04 by ydred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    if (!nmemb || !size)
        return (NULL);
    ptr = (char *) malloc(nmemb * size);
    if (ptr == NULL)
        return(NULL); 
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}