/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:11:38 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/07 12:36:09 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (len == 0 && n[0] == '\0' )
		return (h);
	if (len == 0 || (!h && !n))
		return (NULL);
	if (n[0] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && n[j] && (j + i) < len)
			j++;
		if (n[j] == '\0')
			return ((char *)(h + i));
		i++;
	}
	return (NULL);
}
