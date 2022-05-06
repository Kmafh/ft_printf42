/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:05:37 by anherrer          #+#    #+#             */
/*   Updated: 2022/05/06 12:20:19 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

static int	ft_putstri(char *args)
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

int	printf_num(unsigned int num)
{
	char			*dest;
	unsigned int	result;

	dest = ft_itoa(num);
	result = ft_putstri(dest);
	free(dest);
	return (result);
}
