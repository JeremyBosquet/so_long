/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:15:28 by jbosquet          #+#    #+#             */
/*   Updated: 2021/11/09 16:52:13 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static unsigned int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0 && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		if (s[i])
			i++;
	}
	return (count);
}

static int	ft_len_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_clear_split(int n, char **split)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char		**str_split;
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	str_split = (char **)ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!str_split)
		return (0);
	while (i <= ft_count_words(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
		{
			str_split[i] = ft_word_dup(s, j, j + ft_len_word(&s[j], c));
			if (!str_split[i])
				return (ft_clear_split(i, str_split));
			j += ft_len_word(&s[j], c);
		}
		i++;
	}
	return (str_split);
}
