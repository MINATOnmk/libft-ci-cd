/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:58:12 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/16 19:14:29 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char			*ptr;
	size_t			i;
	size_t			len;

	len = ft_strlen(str);
	ptr = (char *)str;
	i = 0;
	while (i <= len)
	{
		if (ptr[i] == (char)c)
			return ((char *)&ptr[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)(ptr + i));
	return (NULL);
}
