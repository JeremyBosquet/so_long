/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:37:28 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/04 08:57:35 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searchedChar)
{
	int		i;
	char	*astr;

	astr = (char *) str;
	i = 0;
	while (astr[i])
	{
		if (astr[i] == (char) searchedChar)
		{
			return (&astr[i]);
		}
		i++;
	}
	if (searchedChar == '\0')
		return (&astr[i]);
	return (0);
}
