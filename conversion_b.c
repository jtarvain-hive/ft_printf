/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:32:31 by jtarvain          #+#    #+#             */
/*   Updated: 2025/06/05 15:44:58 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_ptr(int *count, void *p)
{
	if (p == NULL)
	{
		(*count) += 5;
		return (ft_putstr_fd("(nil)", 1));
	}
	if (ft_putstr_fd("0x", 1) == -1)
		return (-1);
	(*count) += 2;
	return (ft_putptr((uintptr_t)p, count));
}

int	convert_hex(int *count, unsigned int number, const char c)
{
	if (ft_islower(c))
		return (ft_puthex(count, number));
	else
		return (ft_puthex_u(count, number));
}

int	ft_puthex(int *count, unsigned int number)
{
	if (number / 16 == 0)
	{
		(*count)++;
		return (ft_putchar_fd(HEX[number % 16], 1));
	}
	else
	{
		if (ft_puthex(count, number / 16) == -1)
			return (-1);
		if (ft_putchar_fd(HEX[number % 16], 1) == -1)
			return (-1);
		(*count)++;
	}
	return (0);
}

int	ft_puthex_u(int *count, unsigned int number)
{
	if (number / 16 == 0)
	{
		(*count)++;
		return (ft_putchar_fd(HEX_U[number % 16], 1));
	}
	else
	{
		if (ft_puthex_u(count, number / 16) == -1)
			return (-1);
		if (ft_putchar_fd(HEX_U[number % 16], 1) == -1)
			return (-1);
		(*count)++;
	}
	return (0);
}
