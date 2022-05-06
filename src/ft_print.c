/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:45:38 by anherrer          #+#    #+#             */
/*   Updated: 2022/05/06 12:20:48 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	format_printf(va_list args, char s)
{
	int	result;

	result = 0;
	if (s == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (s == 's')
		result += printf_str(va_arg(args, char *));
	else if (s == 'p')
		result += printf_ptr(va_arg(args, unsigned long long));
	else if (s == 'd' || s == 'i')
		result += printf_num(va_arg(args, int));
	else if (s == 'u')
		result += printf_unsigned(va_arg(args, int));
	else if (s == 'x' || s == 'X')
		result += printf_hex(va_arg(args, int), s);
	else if (s == '%')
		result += ft_putchar('%');
	return (result);
}

int	ft_printf(char const *s, ...)
{
	int		result;
	int		i;
	va_list	args;

	result = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			result += format_printf(args, s[i + 1]);
			i++;
		}
		else
			result += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (result);
}
