/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:59:48 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/10 09:38:16 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_size_inttochar(long int n)
{
	unsigned int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				i;
	int				neg;
	long int		nb;

	nb = n;
	neg = 1;
	res = (char *)malloc(sizeof(char) * (ft_size_inttochar(n) + 1));
	if (!res)
		return (0);
	i = ft_size_inttochar(n) - 1;
	if (n < 0)
	{
		neg = -neg;
		nb = -nb;
	}
	while (i >= 0)
	{
		res[i--] = ((nb % 10) + '0');
		nb = nb / 10;
	}
	if (neg == -1)
		res[0] = '-';
	res[ft_size_inttochar(n)] = '\0';
	return (res);
}
