/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:51:15 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 09:51:57 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
//La función bzero() borra los datos en los n bytes 
//de la memoria comenzando en la ubicación señalada por s,
//escribiendo ceros (bytes que contienen '\0') en esa área.
//

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
