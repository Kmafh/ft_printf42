/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:26:54 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 10:29:36 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!(result))
		return (0);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}
