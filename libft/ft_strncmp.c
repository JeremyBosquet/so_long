/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:37:47 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 09:13:54 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	unsigned long int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((a[i] || b[i]) && i < n)
	{
		if (a[i] != b[i])
			return ((unsigned char)a[i] - (unsigned char)b[i]);
		i++;
	}
	return ((unsigned char)a[i - 1] - (unsigned char)b[i - 1]);
}
