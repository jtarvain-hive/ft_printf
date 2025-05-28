#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	if (!*str)
	{
		return (0);
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
		va_end(args);
	}
	return (count);
}
