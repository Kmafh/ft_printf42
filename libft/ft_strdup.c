/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:13:59 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 10:15:02 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dest;
	int		cant;
	int		i;

	i = 0;
	cant = ft_strlen(str);
	dest = (char *)malloc(cant * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < cant)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	str = dest;
	return (str);
}
