/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:32:48 by jtarvain          #+#    #+#             */
/*   Updated: 2025/06/03 13:27:11 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	int		check;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && (*str + 1) != '\0')
		{
			str++;
			check = parser(&str, &count, args);
			str++;
		}
		else
		{
			check = ft_putchar_fd(*str++, 1);
			count++;
		}
		if (check == -1)
			break ;
	}
	va_end(args);
	if (check == -1)
		return (-1);
	return (count);
}

int	parser(const char **str, int *count, va_list var)
{
	if (**str == 'c')
		return (convert_char(count, va_arg(var, int)));
	else if (**str == 's')
		return (convert_str(count, va_arg(var, char *)));
	else if (**str == 'd' || **str == 'i')
		return (convert_decimal(count, va_arg(var, int)));
	else if (**str == 'u')
		return (convert_unsigned(count, va_arg(var, unsigned int)));
	else if (**str == 'p')
		return (convert_ptr(count, va_arg(var, void *)));
	else if (**str == 'x' || **str == 'X')
		return (convert_hex(count, va_arg(var, unsigned int), **str));
	else if (**str == '%')
	{
		ft_putchar_fd('%', 1);
		(*count)++;
	}
	return (0);
}
