/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:10:26 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 16:19:55 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char unsigned		*pstr1;
	char const unsigned	*pstr2;

	if (!str1 && !str2)
		return (0);
	if (str1 > str2)
	{
		pstr1 = str1 + n;
		pstr2 = str2 + n;
		while (n-- > 0)
			*--pstr1 = *--pstr2;
	}
	else
	{
		pstr1 = str1;
		pstr2 = str2;
		while (n-- > 0)
			*pstr1++ = *pstr2++;
	}
	return (str1);
}
