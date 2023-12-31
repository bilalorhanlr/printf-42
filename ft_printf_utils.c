/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilalorhanlar <bilalorhanlar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:52:51 by bilalorhanl       #+#    #+#             */
/*   Updated: 2023/10/29 15:52:52 by bilalorhanl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*new_str;
	int		i ;

	i = 0;
	if (str == NULL)
		return (NULL);
	new_str = (char *)malloc(ft_strlen((const char *) str) + 1);
	if (new_str == NULL)
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (s == 0)
		return (0);
	if (*s == '\0' || start > ft_strlen(s))
		return (ft_strdup(""));
	new = (char *) malloc(len + 2);
	if (!(new))
	{
		free(new);
		return (0);
	}
	i = start;
	j = 0;
	while (i < (len + start))
	{
		new[j] = s[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&copy[i]);
		i++;
	}
	if (s[i] == c)
		return (&copy[i]);
	else
		return (0);
}
