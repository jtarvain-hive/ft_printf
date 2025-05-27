#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int     ft_printf(const char *str, ...);
int     digit_length(int nbr);
void	parse_specifier(const char **str, int *count, va_list var);
void	convert_char(int *count, va_list var);
void    convert_decimal(int *count, va_list var);
void    convert_unsigned(int *count, va_list var);
void    convert_ptr(int *count, va_list var);
void	convert_str(int *count, va_list var);

#endif