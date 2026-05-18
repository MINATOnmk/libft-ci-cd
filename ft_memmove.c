/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:46:34 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/16 19:13:00 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	lent;

	lent = len;
	if (!dst && !src)
		return (NULL);
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		len--;
		while (len >= 0 && len < lent)
		{
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
			len--;
		}
	}
	return (dst);
}
