/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:52:17 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 09:58:31 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb + size < size || nmemb + size < nmemb)
		return (0);
	result = malloc(nmemb * size);
	if (!(result))
		return (0);
	ft_bzero(result, nmemb * size);
	return (result);
}
