/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:36:00 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/09 01:34:45 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static char	*ft_onenull(const char *s1, char const *s2)
{
	if (!s1 && s2 != NULL)
		return (ft_strdup(s2));
	if (!s2 && s1 != NULL)
		return (ft_strdup(s1));
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*ptr;

	if (!s1 || !s2)
		return (ft_onenull(s1, s2));
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (*s1)
	{
		*ptr = *(char *)s1;
		ptr++;
		s1++;
	}
	while (*s2)
	{
		*ptr = *(char *)s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	return (ptr - len);
}
