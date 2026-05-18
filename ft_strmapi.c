/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:17:42 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/10 15:34:18 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		lens;
	char	*ptr;
	int		i;

	i = 0;
	if (s == NULL || !f)
		return (NULL);
	lens = ft_strlen(s);
	ptr = (char *) malloc(sizeof(char) * lens + 1);
	if (!s || !ptr)
		return (NULL);
	while (i < lens)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
