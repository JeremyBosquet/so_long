/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:29:35 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/08 15:34:14 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned int		i;
	char				*asrc;
	char				*adest;

	asrc = (char *) src;
	adest = (char *) dest;
	i = 0;
	if (!dest && !src && size > 0)
		return (dest);
	while (i < size)
	{
		adest[i] = asrc[i];
		i++;
	}
	return (dest);
}
