#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h" 

int main(void)
{
    printf("--- Starting Libft Unit Tests ---\n");
    
    assert(ft_strlen("hello") == 5);
    printf("✅ ft_strlen test passed!\n");

    
    assert(ft_toupper('a') == 'A');
    printf("✅ ft_toupper test passed!\n");

    
    char *joined = ft_strjoin("hello ", "world");
    if (joined != NULL)
    {
        assert(strcmp(joined, "hello world") == 0);
        free(joined); 
    }
    printf("✅ ft_strjoin test passed!\n");

    
    // printf("⏳ Running the purposefully failing test...\n");
    
    
    // assert(ft_strlen("hi") == 5); 

    
    printf("✅ All tests passed!\n"); 
    return (0);
}