/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:39:37 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/05 10:10:25 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (fd)
	{
		if (n < 0)
		{
			nb = -nb;
			ft_putchar_fd('-', fd);
		}
		if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
		}
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}
