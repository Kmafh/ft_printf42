/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:17:41 by anherrer          #+#    #+#             */
/*   Updated: 2022/05/06 12:21:24 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

int	ft_leng(unsigned int num)
{
	int	leng;

	leng = 0;
	while (num > 0)
	{
		num /= 16;
		leng++;
	}
	return (leng);
}

void	pro_hex(unsigned int num, char lower)
{
	int	result;

	if (num >= 16)
	{
		pro_hex(num / 16, lower);
		pro_hex(num % 16, lower);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(num + '0', 1);
		else
		{
			if (lower == 'x')
				ft_putchar_fd(num - 10 + 'a', 1);
			else
				ft_putchar_fd(num - 10 + 'A', 1);
		}
	}
}

int	printf_hex(unsigned int num, char lower)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
	{
		pro_hex(num, lower);
	}
	return (ft_leng(num));
}
