/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:32:48 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/29 15:44:49 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	if (!*str)
		return (0);
	else
	{
		count = 0;
		va_start(args, str);
		while (*str)
		{
			if (*str == '%')
				parse_specifier(&str, &count, args);
			else
			{
				ft_putchar_fd(*str++, 1);
				count++;
			}
		}
		va_end(args);
	}
	return (count);
}
