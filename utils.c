#include "ft_printf.h"

void	parse_specifier(char **str, int *count, va_list var)
{
	(*str)++;
	if (*str == 'c')
		convert_char(&str, &count, var);
	else if (*str == 's')
		convert_str(&str, &count, var);
	else if (*str == 'p')
		return ;
	else if (*str == 'd' || *str == 'i')
		convert_decimal(&str, &count, var);
	else if (*str == 'u')
		return ;
	else if (*str == 'x')
		return ;
	else if (*str == 'X')
		return ;
	else if (*str == '%')
	{
		ft_putchar_fd('%', 1);
        (*str)++;
		(*count)++;
	}
}

int digit_length(int nbr)
{
    int space;

    space = 0;
    if (nbr < 0)
        nbr *= -1;
    while (nbr)
    {
        nbr /= 10;
        space++;
    }
    return (space);
}