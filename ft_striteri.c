/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:09:52 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/09 01:33:00 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		lens;
	int		i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	lens = ft_strlen(s);
	if (!s)
		return ;
	while (i < lens)
	{
		f(i, &s[i]);
		i++;
	}
}
