/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:40:08 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 12:00:55 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int searchedChar)
{
	int		i;
	char	*astr;

	astr = (char *) str;
	i = 0;
	while (astr[i])
		i++;
	if (searchedChar == '\0')
		return (&astr[i]);
	i--;
	while (i != -1 && astr[i])
	{
		if (astr[i] == (char)searchedChar)
			return (&astr[i]);
		i--;
	}
	return (0);
}
