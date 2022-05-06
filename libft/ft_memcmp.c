/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:09:07 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 10:09:24 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*st1;
	const unsigned char	*st2;
	int					i;

	i = 0;
	st1 = (const unsigned char *)str1;
	st2 = (const unsigned char *)str2;
	while (n-- > 0)
	{
		if (st1[i] > st2[i])
			return (st1[i] - st2[i]);
		if (st1[i] < st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}
