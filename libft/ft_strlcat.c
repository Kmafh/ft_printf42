/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:19:38 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 13:30:26 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*{
	size_t	cont;
	

	cont = 0;
	
	size_t size_dst;
	size_t size_src;

	size_dst=ft_strlen(dst);
	size_src=ft_strlen(src)-1;
	
	if(size_dst <= size_src)
		return (size_dst + size_src);

	while (src[cont] && cont +1 < dstsize)
	{
		
		dst[size_dst + cont] = src[cont];
		cont++;
	}
	dst[cont] = '\0';
	
	return (size_dst + size_src );
}*/
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	cont;
	unsigned int	cont2;
	unsigned int	ddest;
	unsigned int	dsrc;

	cont = 0;
	cont2 = 0;
	while (dest[cont2] != '\0')
	{
		cont2++;
	}
	ddest = cont2;
	dsrc = ft_strlen(src);
	if (dstsize == 0 || dstsize <= ddest)
		return (dsrc + dstsize);
	while (src[cont] != '\0' && cont < dstsize - ddest - 1)
	{
		dest[cont2] = src[cont];
		cont++;
		cont2++;
	}
	dest[cont2] = '\0';
	return (ddest + dsrc);
}
