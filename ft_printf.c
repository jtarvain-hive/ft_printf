#include "ft_printf.h"
#include "libft.h"

void	parse_specifier(char **str, int *count, va_list i);

int		ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	if (!*str)
	{
		//error
	}
	else
	{
		count = 0;
		va_start(args, str);
		while (*str)
			if (*str == '%')
				parse_specifier(&str, &count, args);
			else
			{
				ft_putchar_fd(*str++, 1);
				count++;
			}
	}
	va_end(args);
	return (count);
}

void	parse_specifier(char **str, int *count, va_list i)
{
	(*str)++;
	if (*str == 'c')
		// code here
	else if (*str == 's')
		// call str()
	else if (*str == 'p')
		// call p()
	else if (*str == 'd')
		// call d()
	else if (*str == 'i')
		// call i()
	else if (*str == 'u')
		// call u()
	else if (*str == 'x')
		// call x()
	else if (*str == 'X')
		// call X()
	else if (*str == '%')
	{
		ft_putchar_fd('%*', 1);
		(*count)++;
	}
}