/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:21:07 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 16:25:39 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isin_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_findstart_trim(char	*str, char *set)
{
	int	i;

	i = 0;
	while (ft_isin_trim(str[i], set))
		i++;
	return (&str[i]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		count;
	char	*newstr;
	char	*copy;

	count = 0;
	i = 0;
	if (!s1)
		return (0);
	copy = ft_findstart_trim((char *)s1, (char *)set);
	i = ft_strlen(copy) - 1;
	while (ft_isin_trim(copy[i], set) && copy[i--] && i >= 0)
		count++;
	newstr = ft_calloc(ft_strlen(copy) - count + 1, sizeof(char));
	if (!newstr)
		return (0);
	ft_strlcat(newstr, copy, (ft_strlen(copy) - count + 1));
	newstr[ft_strlen(newstr)] = 0;
	return (newstr);
}
