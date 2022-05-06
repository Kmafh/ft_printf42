/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:09:52 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 10:10:14 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char unsigned		*pstr1;
	char const unsigned	*pstr2;

	if (!str1 && !str2)
		return (0);
	pstr1 = str1;
	pstr2 = str2;
	while (n-- > 0)
	{
		*pstr1++ = *pstr2++;
	}
	return (str1);
}
