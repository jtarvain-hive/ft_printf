#include "ft_printf.h"
#include "libft.h"

void	parse_specifier(const char **str, int *count, va_list var)
{
	(*str)++;
	if (**str == '\0')
		return ;
	else if (**str == 'c')
		convert_char(count, var);
	else if (**str == 's')
		convert_str(count, var);
	else if (**str == 'p')
		return ;
	else if (**str == 'd' || **str == 'i')
		convert_decimal(count, var);
	else if (**str == 'u')
		return ;
	else if (**str == 'x')
		return ;
	else if (**str == 'X')
		return ;
	else if (**str == '%')
	{
		ft_putchar_fd('%', 1);
		(*count)++;
	}
		(*str)++;
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