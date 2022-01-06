/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:49:22 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/08 09:08:48 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *m1, const void *m2, size_t size)
{
	unsigned long int	i;
	unsigned char		*amem1;
	unsigned char		*amem2;

	amem1 = (unsigned char *)m1;
	amem2 = (unsigned char *)m2;
	i = 0;
	if (size == 0)
		return (0);
	while ((amem1[i] == amem2[i]) && (i < size - 1))
		i++;
	return (amem1[i] - amem2[i]);
}
