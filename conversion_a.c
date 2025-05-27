#include "ft_printf.h"
#include "libft.h"

void	convert_char(int *count, va_list var)
{
    char    c;

    c = (char)va_arg(var, int);
    ft_putchar_fd(c, 1);
    (*count)++;
}

void	convert_str(int *count, va_list var)
{
    char    *s;

    s = va_arg(var, char *);
    while (*s)
    {
        ft_putchar_fd(*s, 1);
        (*count)++;
        s++;
    }
}

void    convert_decimal(int *count, va_list var)
{
    int number;
    int space;

    number = va_arg(var, int);
    space = digit_length(number);
    if (number < 0)
        (*count)++;
    else if (space == 0)
    {
        (*count)++;
    }
    (*count) += space;
    ft_putnbr_fd(number, 1);
}

// void    convert_unsigned(char *str, int *count, va_list var)
// {

// }
