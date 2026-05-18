/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:35:31 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/10 17:11:44 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	sub_len;

	if (!s)
		return (NULL);
	sub_len = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		sub_len = s_len - start + 1;
	else
	{
		sub_len = len - (s_len - start);
		if (sub_len >= 0 && len <= s_len)
			sub_len = len + 1 ;
		else
			sub_len = len - start + 1;
	}
	ptr = (char *)malloc(sizeof(char) * sub_len);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, sub_len);
	return (ptr);
}
