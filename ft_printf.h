#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int     ft_printf(const char *str, ...);
int     digit_length(int nbr);
void	parse_specifier(char **str, int *count, va_list var);
void	convert_char(char **str, int *count, va_list var);
void    convert_decimal(char **str, int *count, va_list var);
void    convert_unsigned(char **str, int *count, va_list var);
void    convert_ptr(char **str, int *count, va_list var);
void	convert_str(char **str, int *count, va_list var);

#endif