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

int	parse_specifier(const char **str, int *count, va_list var)
{
	if (**str == '\0')
		return (0);
	else if (**str == 'c')
		return (convert_char(count, var));
	else if (**str == 's')
		return (convert_str(count, var));
	else if (**str == 'd' || **str == 'i')
		return (convert_decimal(count, var));
	else if (**str == 'u')
		return (convert_unsigned(count, var));
	else if (**str == 'x' || **str == 'X' || **str == 'p')
		return (convert_hex(count, var, **str));
	else if (**str == '%')
	{
		ft_putchar_fd('%', 1);
		(*count)++;
	}
	else
	{
		ft_putchar_fd('%', 1);
		ft_putchar_fd(**str, 1);
		(*count) += 2;
	}
	(*str)++;
}

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
