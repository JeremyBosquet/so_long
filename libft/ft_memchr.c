/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:28:33 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 11:59:13 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *membloc, int searchedChar, size_t size)
{
	unsigned int		i;
	char				*amembloc;

	amembloc = (char *) membloc;
	i = 0;
	while (size--)
	{
		if (amembloc[i] == (char)searchedChar)
			return (&amembloc[i]);
		i++;
	}
	return (0);
}
