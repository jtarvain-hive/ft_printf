/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:33:03 by jtarvain          #+#    #+#             */
/*   Updated: 2025/06/05 15:44:48 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <limits.h>

# define HEX "0123456789abcdef"
# define HEX_U "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
int		digit_length(int nbr);
int		unsigned_length(unsigned int nbr);
int		parser(const char **str, int *count, va_list *var);
int		convert_char(int *count, int n);
int		convert_decimal(int *count, int n);
int		convert_ptr(int *count, void *p);
int		convert_hex(int *count, unsigned int n, const char c);
int		convert_str(int *count, char *str);
int		convert_unsigned(int *count, unsigned int n);
int		ft_putunsigned_fd(unsigned int n, int fd);
int		ft_putptr(uintptr_t ptr, int *count);
int		ft_puthex(int *count, unsigned int number);
int		ft_puthex_u(int *count, unsigned int number);

#endif
