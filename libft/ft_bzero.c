/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:21:18 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 11:45:38 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *membloc, size_t size)
{
	char				*amembloc;
	int					i;

	i = 0;
	amembloc = (char *) membloc;
	while (size > 0)
	{
		amembloc[i] = '\0';
		size--;
		i++;
	}
}
