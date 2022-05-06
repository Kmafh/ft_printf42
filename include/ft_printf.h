/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:24:58 by anherrer          #+#    #+#             */
/*   Updated: 2022/05/06 12:30:21 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *src, ...);
int	printf_str(char *args);
int	printf_num(unsigned int num);
int	printf_unsigned(unsigned int n);
int	printf_ptr(unsigned long long ptr);
int	printf_hex(unsigned int num, char lower);

#endif
