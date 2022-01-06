/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:22:52 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/03 11:23:31 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if ((character >= '0' && character <= '9')
		|| (character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1);
	return (0);
}
