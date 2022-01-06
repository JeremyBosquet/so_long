/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:09:50 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 17:43:17 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		lenght;

	lenght = ft_strlen(dest) + ft_strlen(src);
	if (size <= (size_t)ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (*dest)
		dest++;
	i = 0;
	while ((i < size - (lenght - ft_strlen(src)) - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (lenght);
}
