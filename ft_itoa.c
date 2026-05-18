/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:26:40 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/16 19:10:37 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_len(int n, int *ptr)
{
	int	cont;

	cont = 0;
	if (n < 0)
		cont++;
	while (n)
	{
		cont++;
		n = n / 10;
	}
	*ptr = 0;
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		nlen;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	nlen = nb_len(n, &i);
	ptr = (char *)malloc(nlen * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	ptr[nlen--] = '\0';
	if (n < 0)
	{
		ptr[i++] = '-';
		n = -n;
	}
	while (n)
	{
		ptr[nlen--] = n % 10 + 48;
		n = n / 10;
	}
	return (ptr);
}
