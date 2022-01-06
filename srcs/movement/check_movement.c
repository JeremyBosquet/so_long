/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_movement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:18:28 by jbosquet          #+#    #+#             */
/*   Updated: 2022/01/05 18:58:56 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_c_is(char c, t_game *game, int y, int x)
{
	return (game->map.map[y][x] == c);
}

int	move_c_exit(t_game *game)
{
	if (game->play.coins == game->map.coins)
	{
		printf("\n=============== SO_LONG ===============\n");
		printf("            Partie terminée\n");
		printf("               Score: %zu\n", game->play.moves);
		printf("=======================================\n");
		ft_close(game);
	}
	return (0);
}

int	move_c_coins(t_game *game, int y, int x)
{
	if (game->map.map[y][x] == 'C')
	{
		game->map.map[y][x] = 'O';
		game->play.coins += 1;
		game->play.on_coins = 1;
		return (1);
	}
	if (game->map.map[y][x] == 'E')
	{
		game->play.on_exit = 1;
		move_c_exit(game);
		return (1);
	}
	if (game->map.map[y][x] == 'O')
	{
		game->play.on_coins = 1;
		return (1);
	}
	return (0);
}
