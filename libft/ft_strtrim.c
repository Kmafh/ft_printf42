/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anherrer <anherrer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:03:31 by anherrer          #+#    #+#             */
/*   Updated: 2022/04/26 13:05:49 by anherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_get_first(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

size_t	ft_get_last(char const *s1, char const *set)
{
	size_t	k;
	size_t	i;

	i = 0;
	k = ft_strlen(s1);
	while (s1[--k] && ft_strchr(set, s1[k]))
		i++;
	return (i);
}

void	ft_asign_value(char const *s1, char *s2, size_t j, size_t len)
{
	size_t	i;

	i = 0;
	while (j < len)
		s2[i++] = s1[j++];
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*s2;

	i = ft_get_first(s1, set);
	if (i == ft_strlen(s1))
	{
		s2 = ft_calloc(2, sizeof(char));
		if (!s2)
			return (0);
		return (s2);
	}
	len = ft_strlen(s1) - (i + ft_get_last(s1, set));
	s2 = ft_calloc(len + 1, sizeof(char));
	if (!s2)
		return (0);
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	len += i;
	ft_asign_value(s1, s2, i, len);
	return (s2);
}

/*static int ft_firts_pos(char const *s1, char const *set)
{
    int i;

    i=0;
    while(s1[i]!='\0' && ft_strchr(set, s1[i])==0)
            i++;
 return (i);
}
static int	ft_end_pos(char const *s1, char const *set)
{
    int i;
    int size;

    i=0;
    size=ft_strlen((char *)s1);
    while(size-->0 && ft_strchr(set, s1[size])==0)
        {
            i++;
        }
    return (size-i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    unsigned int start;
    unsigned int end;
    int i;

    i=0;

    start=ft_firts_pos(s1,set);
    end=ft_end_pos(s1,set);
    int size_s1;
    int size;
    size=start - end;
    char    *dest=NULL;
    size_s1=ft_strlen(s1);

    printf("Start: %d",start);
    printf("Start: %d",end);
    dest=(char *)malloc(size * sizeof(char) );
    if(dest==NULL)
        return (0);

    if(start< size_s1 - end)
    {
            dest=ft_substr(s1, start, end);  
    }  
    return(char *)dest;
}*/
