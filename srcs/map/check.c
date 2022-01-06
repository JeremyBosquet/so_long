/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:35:14 by jbosquet          #+#    #+#             */
/*   Updated: 2022/01/05 18:58:41 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_c_m_rect(char **map, int nb_l)
{
	int	ref;
	int	i;
	int	j;

	ref = 0;
	i = 0;
	j = 0;
	if (nb_l <= 2)
		return (0);
	while (map[0][ref])
		ref++;
	while (nb_l > 0)
	{
		j = 0;
		while (map[i][j])
			j++;
		if (j != ref)
			return (0);
		i++;
		nb_l--;
	}
	return (1);
}

int	ft_c_m_char(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != '1' && map[i][j] != '0' &&
				map[i][j] != 'C' && map[i][j] != 'P' && map[i][j] != 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_c_m_walls(char **map, int nb_l)
{
	int	i;
	int	len_line;

	i = 0;
	len_line = 0;
	if (!*map)
		return (0);
	while (map[0][len_line])
		len_line++;
	if (len_line < 3)
		return (0);
	while (map[0][i])
	{
		if (map[0][i] != '1' || map[nb_l - 1][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][len_line - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	ft_c_m_e_c_p(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map.map[i])
	{
		j = 0;
		while (game->map.map[i][j])
		{
			if (game->map.map[i][j] == 'E')
				game->map.exit += 1;
			else if (game->map.map[i][j] == 'C')
				game->map.coins += 1;
			else if (game->map.map[i][j] == 'P')
			{
				game->map.player += 1;
				game->play.y = i * X;
				game->play.x = j * Y;
			}
			j++;
		}
		i++;
	}
	return (1);
}
