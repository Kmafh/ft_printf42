/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:33:44 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/27 19:34:09 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (s[i] && s[i] == c)
		i++;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	return (word);
}

char	*malloc_str(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)ft_calloc(i + 1, sizeof(char));
	if (!word)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		n_words;
	char	**strs;
	int		i;

	if (!s)
		return (0);
	n_words = count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!strs)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			strs[i] = malloc_str(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	strs[i] = 0;
	return (strs);
}
