/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:08:03 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 10:08:57 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char const unsigned	*pstr;

	pstr = str;
	while (n-- > 0)
	{
		if (*pstr == (unsigned char)c)
			return ((void *)pstr);
		pstr++;
	}
	return (NULL);
}
