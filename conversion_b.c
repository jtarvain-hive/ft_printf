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

void	convert_ptr(char *str, int *count, va_list var)
{

}
