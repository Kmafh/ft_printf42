/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:01:24 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/27 13:01:27 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	initialize_var_n(int n)
{
	long	num;

	num = n;
	if (num <= 0)
		num = -num;
	return (num);
}

unsigned int	initialize_var_s(int n)
{
	unsigned int	s;

	s = 0;
	if (n <= 0)
		s++;
	return (s);
}

char	*ft_itoa(int n)
{
	char			*str;
	long			nbr;
	unsigned int	size;

	nbr = initialize_var_n(n);
	size = initialize_var_s(n);
	while (n)
	{
		n /= 10;
		size++;
	}
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}
