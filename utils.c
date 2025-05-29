/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:33:18 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/29 15:42:45 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	parse_specifier(const char **str, int *count, va_list var)
{
	(*str)++;
	if (**str == '\0')
		return ;
	else if (**str == 'c')
		convert_char(count, var);
	else if (**str == 's')
		convert_str(count, var);
	else if (**str == 'p')
		return ;
	else if (**str == 'd' || **str == 'i')
		convert_decimal(count, var);
	else if (**str == 'u')
		convert_unsigned(count, var);
	else if (**str == 'x')
		return ;
	else if (**str == 'X')
		return ;
	else if (**str == '%')
	{
		ft_putchar_fd('%', 1);
		(*count)++;
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
