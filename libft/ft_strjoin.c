/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:15:25 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 10:19:11 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		result;
	char	*dest;

	dest = "58";
	result = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc(result * sizeof(char));
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, s1, ft_strlen(s1));
	ft_memcpy(dest + ft_strlen(s1), s2, ft_strlen(s2));
	dest[result] = '\0';
	return (dest);
}
