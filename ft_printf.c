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
		if (*str != '%')
		{
			check = ft_putchar_fd(*str++, 1);
			count++;
		}
		else
		{
			str++;
			check = parse_specifier(&str, &count, args);
		}
		if (check == -1)
			break ;
	}
	va_end(args);
	if (check == -1)
		return (-1);
	return (count);
}
