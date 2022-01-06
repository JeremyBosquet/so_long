/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:28:44 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 12:57:53 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	newstr = NULL;
	if (!s)
		return (0);
	if (len > (size_t)ft_strlen(s))
		len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (0);
	if (start < (unsigned char)ft_strlen((char *)s))
	{
		while (i < (start + len) && s[i])
		{
			newstr[j] = s[i];
			j++;
			i++;
		}
	}
	newstr[j] = 0;
	return (newstr);
}
