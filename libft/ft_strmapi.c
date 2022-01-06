/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:53:01 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/05 15:02:31 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*newstr;

	i = 0;
	if (!s)
		return (0);
	newstr = ft_strdup(s);
	if (!newstr)
		return (0);
	while (s[i])
	{
		newstr[i] = (f)(i, s[i]);
		i++;
	}
	return (newstr);
}
