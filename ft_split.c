/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:37:11 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/10 15:32:39 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contw(char *str, char c, int *n1, int *n2)
{
	int	cont;

	cont = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (!(*str == c) && *str)
			cont++;
		while (!(*str == c) && *str)
			str++;
	}
	*n1 = 0;
	*n2 = 0;
	return (cont);
}

static int	get_index(char *str, int end, char c, int *beg)
{
	while (str[end] != '\0')
	{
		while (str[end] == c && str[end])
			end++;
		*beg = end;
		while (str[end] != c && str[end])
			end++;
		if (str[end] == c)
			return (end);
	}
	return (end);
}

static char	**allc_failed(char **ptr, int word, char *s, char c)
{
	int	i ;
	int	start;
	int	end;

	end = 0;
	i = 0;
	while (i < word)
	{
		end = get_index(s, end, c, &start);
		ptr[i] = (char *)malloc((end - start + 1) * sizeof(char));
		if (!ptr[i])
		{
			while (i >= 0)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}
		i++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		word;
	int		end;
	int		start;
	int		i;

	if (s == NULL)
		return (NULL);
	word = contw((char *)s, c, &i, &end);
	ptr = (char **)malloc(sizeof(char *) * (word + 1));
	if (!ptr)
		return (NULL);
	if (!allc_failed(ptr, word, (char *)s, c))
		return (NULL);
	ptr[word] = NULL;
	while (i < word)
	{
		end = get_index((char *)s, end, c, &start);
		ft_strlcpy(ptr[i], s + start, end - start + 1);
		i++;
	}
	return (ptr);
}
