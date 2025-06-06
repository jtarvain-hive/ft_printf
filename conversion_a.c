/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:32:21 by jtarvain          #+#    #+#             */
/*   Updated: 2025/06/05 16:09:58 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_char(int *count, int n)
{
	char	c;

	c = n;
	if (ft_putchar_fd(c, 1) == -1)
		return (-1);
	(*count)++;
	return (0);
}

int	convert_str(int *count, char *str)
{
	if (!str)
	{
		(*count) += 6;
		return (ft_putstr_fd("(null)", 1));
	}
	while (*str)
	{
		if (ft_putchar_fd(*str, 1) == -1)
			return (-1);
		(*count)++;
		str++;
	}
	return (0);
}

int	convert_decimal(int *count, int n)
{
	int	space;

	space = digit_length(n);
	if (n < 0)
		(*count)++;
	else if (space == 0)
	{
		(*count)++;
	}
	(*count) += space;
	if (ft_putnbr_fd(n, 1) == -1)
		return (-1);
	return (0);
}

int	convert_unsigned(int *count, unsigned int n)
{
	int				space;

	space = unsigned_length(n);
	if (space == 0)
		(*count)++;
	(*count) += space;
	if (ft_putunsigned_fd(n, 1) == -1)
		return (-1);
	return (0);
}
