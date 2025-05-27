#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int original;
    int ftprintf;

    // String test
    printf("input: Hello world\n\n");
    original = printf("Hello World\n");
    ftprintf = ft_printf("Hello World\n");
    printf("original:%d\nft_printf:%d\n\n", original, ftprintf);

    // Decimal test
    printf("input: Hello world\n\n");
    original = printf("Hello World\n");
    ftprintf = ft_printf("Hello World\n");
    printf("original: %d\nft_printf: %d\n\n", original, ftprintf);
    return (0);
}