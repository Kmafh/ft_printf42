/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:06:11 by anherrer          #+#    #+#             */
/*   Updated: 2022/05/06 12:21:47 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

static int	ft_putstr(char *args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		write(1, &args[i], 1);
		i++;
	}
	return (i);
}

int	printf_str(char *args)
{
	int	i;

	if (args == NULL)
		return (ft_putstr("(null)"));
	i = 0;
	while (args[i])
	{
		write(1, &args[i], 1);
		i++;
	}
	return (i);
}
