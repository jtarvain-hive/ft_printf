/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:33:03 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/29 15:41:22 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		digit_length(int nbr);
void	parse_specifier(const char **str, int *count, va_list var);
void	convert_char(int *count, va_list var);
void	convert_decimal(int *count, va_list var);
void	convert_ptr(int *count, va_list var);
void	convert_str(int *count, va_list var);
void	convert_unsigned(int *count, va_list var);
void	ft_putunsigned_fd(unsigned int n, int fd);
int		unsigned_length(unsigned int nbr);

#endif
