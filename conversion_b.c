/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:32:31 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/29 16:56:28 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_putunsigned_fd(unsigned int n, int fd)
{
	unsigned int	nbr;

	if (fd < 0)
		return ;
	nbr = (n % 10) + '0';
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 10)
	{
		return ((void)write(fd, &nbr, 1));
	}
	else
	{
		ft_putunsigned_fd(n / 10, fd);
		write(fd, &nbr, 1);
	}
}

void	convert_hex(int *count, va_list var, const char c)
{
	unsigned long	number;

	number = va_arg(var, unsigned long);
	if (c == 'p')
	{
		if (number == 0)
	{
		ft_putstr_fd("(nil)", 1);
		(*count) += 5;
		return;
	}
		ft_putstr_fd("0x", 1);
		(*count) += 2;
		ft_puthex(count, number);
	}
	else if (ft_islower(c))
		ft_puthex(count, number);
	else
		ft_puthex_u(count, number);
}



void	convert_ptr(int *count, va_list var)
{
	unsigned long	number;

	number = va_arg(var, unsigned long);
	if (number == 0)
	{
		ft_putstr_fd("(nil)", 1);
		(*count) += 5;
		return;
	}
	ft_putstr_fd("0x", 1);
	(*count) += 2;
	ft_puthex(count, number);
}

void	ft_puthex(int *count, unsigned long number)
{
	if (number / 16 == 0)
	{
		ft_putchar_fd(HEX[number % 16], 1);
		(*count)++;
		return ;
	}
	else
	{
		ft_puthex(count, number / 16);
		ft_putchar_fd(HEX[number % 16], 1);
		(*count)++;
	}
}

void	ft_puthex_u(int *count, unsigned long number)
{
	if (number / 16 == 0)
	{
		ft_putchar_fd(HEX_U[number % 16], 1);
		(*count)++;
		return ;
	}
	else
	{
		ft_puthex_u(count, number / 16);
		ft_putchar_fd(HEX_U[number % 16], 1);
		(*count)++;
	}
}