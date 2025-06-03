/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:32:31 by jtarvain          #+#    #+#             */
/*   Updated: 2025/06/03 13:42:03 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	if (fd < 0)
		return (-1);
	if (n == 0)
	{
		if (write(fd, "0", 1) == -1)
			return (-1);
		return (0);
	}
	if (n < 10)
	{
		return (ft_putchar_fd(n + '0', fd));
	}
	else
	{
		if (ft_putunsigned_fd(n / 10, fd) == -1)
			return (-1);
		if (ft_putchar_fd((n % 10) + '0', fd) == -1)
			return (-1);
	}
}

int	convert_hex(int *count, va_list var, const char c)
{
	unsigned long	number;

	number = va_arg(var, unsigned long);
	if (ft_islower(c))
		return (ft_puthex(count, number));
	else
		return (ft_puthex_u(count, number));
}

int	ft_puthex(int *count, unsigned long number)
{
	if (number / 16 == 0)
	{
		if (ft_putchar_fd(HEX[number % 16], 1) == -1)
			return (-1);
		(*count)++;
		return ;
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

int	ft_puthex_u(int *count, unsigned long number)
{
	if (number / 16 == 0)
	{
		if (ft_putchar_fd(HEX_U[number % 16], 1) == -1)
			return (-1);
		(*count)++;
		return ;
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

int	putptr(int *count, uintptr_t ptr)
{
	
}
