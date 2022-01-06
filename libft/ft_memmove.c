/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:20:18 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 08:54:30 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*adest;
	char	*asrc;

	asrc = (char *) src;
	adest = (char *) dest;
	if (!dest && !src && n > 0)
		return (dest);
	if (src <= dest)
	{
		while (n--)
			adest[n] = asrc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
}
