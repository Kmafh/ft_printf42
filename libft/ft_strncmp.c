/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:24:38 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/27 14:05:43 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// The strcmp() function compares the two strings s1 and s2. The locale
// is not taken into account (for a locale-aware comparison,
//		see strcoll(3)). The comparison is done using unsigned characters.
//
//La función strcmp() compara las dos cadenas s1 y s2.
//

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (--n > 0 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (ss1[i] > ss2[i])
			return (ss1[i] - ss2[i]);
		if (ss1[i] < ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (ss1[i] - ss2[i]);
}
