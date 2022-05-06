/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:29:46 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 09:51:00 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sing;
	int	posit;
	int	result;

	result = 0;
	sing = 0;
	posit = 0;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == ' '))
		nptr++;
	while (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '+')
			posit++;
		if (*nptr == '-')
			sing++;
		nptr++;
	}
	while (ft_isdigit(*nptr))
		result = result * 10 + (*nptr++ - '0');
	if (sing > 1 || posit > 1 || posit + sing > 1)
		return (0);
	if (sing == 1)
		return (result * -1);
	return (result);
}
