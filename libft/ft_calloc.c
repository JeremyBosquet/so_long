/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:58:23 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/04 09:40:37 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	memsize;
	void			*membloc;
	char			*amembloc;
	unsigned int	i;

	i = 0;
	memsize = count * size;
	membloc = (void *)malloc(memsize);
	if (!membloc)
		return (0);
	amembloc = membloc;
	while (i < memsize)
	{
		amembloc[i] = 0;
		i++;
	}
	return (membloc);
}
