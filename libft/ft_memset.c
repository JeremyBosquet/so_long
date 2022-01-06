/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:46:58 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/08 15:33:27 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *membloc, int value, size_t n)
{
	unsigned int		i;
	char				*amembloc;

	amembloc = (char *) membloc;
	i = 0;
	while (i < n)
	{
		amembloc[i] = value;
		i++;
	}
	return (amembloc);
}
