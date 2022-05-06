/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_unsingned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:06:31 by anherrer          #+#    #+#             */
/*   Updated: 2022/05/06 12:23:17 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "libft/libft.h"

static int	unsig_size(unsigned int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static char	*ft_unitoa(unsigned int n)
{
	char	*dest;
	int		size;

	size = unsig_size(n);
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest[size] = '\0';
	while (n != 0)
	{
		dest[size - 1] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	return (dest);
}

int	printf_unsigned(unsigned int n)
{
	int		leng;
	char	*unsig;

	leng = 0;
	if (n == 0)
		leng += write(1, "0", 1);
	else
	{
		unsig = ft_unitoa(n);
		leng += printf_str(unsig);
		free(unsig);
	}
	return (leng);
}
