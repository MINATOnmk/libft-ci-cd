/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:34:23 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/07 20:12:00 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;
	int		len;
	int		x;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	x = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && check(s1[i], set))
		i++;
	while (j >= i && check(s1[j], set))
		j--;
	len = j - i + 1;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s1[i] && i <= j)
		ptr[x++] = s1[i++];
	ptr[x] = '\0';
	return (ptr);
}

// int main()
// {
//     char s1[] = "";
//     char set[] = "";
//     printf("[%s]\n", ft_strtrim(s1, set));
// }
