/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:26:08 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 10:26:31 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	tam;

	tam = ft_strlen(s);
	if (c == 0)
		return ((char *)s + tam);
	while (tam-- > 0)
	{
		if ((unsigned char)s[tam] == (unsigned char)c)
			return ((char *)s + tam);
		if (s[tam] == c)
			return ((char *)s + tam);
	}
	return (0);
}
