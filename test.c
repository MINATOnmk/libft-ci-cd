/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:43:06 by mboulagh          #+#    #+#             */
/*   Updated: 2024/11/07 12:36:29 by mboulagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h" 

int	main(void)
{
	char	*joined;

	printf("--- Starting Libft Unit Tests ---\n");
	assert(ft_strlen("hello") == 5);
	printf("✅ ft_strlen test passed!\n");
	assert(ft_toupper('a') == 'A');
	printf("✅ ft_toupper test passed!\n");
	joined = ft_strjoin("hello ", "world");
	if (joined != NULL)
	{
		assert(strcmp(joined, "hello world") == 0);
		free(joined);
	}
	// printf("⏳ Running the purposefully failing test...\n");
    // assert(ft_strlen("hi") == 5); 
	printf("✅ ft_strjoin test passed!\n");
	printf("✅ All tests passed!\n");
	return (0);
}
