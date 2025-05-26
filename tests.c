#include "ft_printf.h"
#include "libft.h"

int main(void)
{
    int original;
    int ft_printf;

    printf("input: Hello world\n\n");
    original = printf("Hello World\n");
    ft_printf = ("Hello World\n");
    printf("original:%d\n ft_printf:%d\n\n", original, ft_printf);


    return (0);
}