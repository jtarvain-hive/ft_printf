/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:33:18 by jtarvain          #+#    #+#             */
/*   Updated: 2025/06/03 13:17:20 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	digit_length(int nbr)
{
	int	space;

	space = 0;
	if (nbr < 0)
		nbr *= -1;
	while (nbr)
	{
		nbr /= 10;
		space++;
	}
	return (space);
}

int	unsigned_length(unsigned int nbr)
{
	unsigned int	space;

	space = 0;
	while (nbr)
	{
		nbr /= 10;
		space++;
	}
	return (space);
}

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	if (fd < 0)
		return (-1);
	if (n == 0)
		return (ft_putchar_fd('0', 1));
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
	return (0);
}

int	ft_putptr(uintptr_t ptr, int *count)
{
	if (ptr / 16 == 0)
	{
		(*count)++;
		return (ft_putchar_fd(HEX[ptr % 16], 1));
	}
	else
	{
		if (ft_putptr(ptr / 16, count) == -1)
			return (-1);
		if (ft_putchar_fd(HEX[ptr % 16], 1) == -1)
			return (-1);
		(*count)++;
	}
	return (0);
}
