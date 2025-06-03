/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:32:21 by jtarvain          #+#    #+#             */
/*   Updated: 2025/06/03 13:28:22 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	convert_char(int *count, va_list var)
{
	char	c;

	c = (char)va_arg(var, int);
	if (ft_putchar_fd(c, 1) == -1)
		return (-1);
	(*count)++;
	return (0);
}

int	convert_str(int *count, va_list var)
{
	char	*s;

	s = va_arg(var, char *);
	while (*s)
	{
		if (ft_putchar_fd(*s, 1) == -1)
			return (-1);
		(*count)++;
		s++;
	}
	return (0);
}

int	convert_decimal(int *count, va_list var)
{
	int	number;
	int	space;

	number = va_arg(var, int);
	space = digit_length(number);
	if (number < 0)
		(*count)++;
	else if (space == 0)
	{
		(*count)++;
	}
	(*count) += space;
	if (ft_putnbr_fd(number, 1) == -1)
		return (-1);
	return (0);
}

int	convert_unsigned(int *count, va_list var)
{
	unsigned int	number;
	int				space;

	number = va_arg(var, unsigned int);
	space = unsigned_length(number);
	if (space == 0)
	{
		(*count)++;
	}
	(*count) += space;
	if (ft_putunsigned_fd(number, 1) == -1)
		return (-1);
	return (0);
}
