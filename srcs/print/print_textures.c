/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_textures.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:31:20 by jbosquet          #+#    #+#             */
/*   Updated: 2022/01/05 18:58:41 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_img(t_game *game, void *img_ptr, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win, img_ptr, x, y);
}

void	ft_print_texts(t_game game)
{
	int	i;
	int	j;

	i = 0;
	while (game.map.map[i])
	{
		j = -1;
		while (game.map.map[i][++j])
		{
			if (game.map.map[i][j] == 'E')
				ft_put_img(&game, game.txtrs.exit, j * X, i * Y);
			else if (game.map.map[i][j] == '1')
				ft_put_img(&game, game.txtrs.wall, j * X, i * Y);
			else if (game.map.map[i][j] == '0' || game.map.map[i][j] == 'P')
				ft_put_img(&game, game.txtrs.floor, j * X, i * Y);
			else if (game.map.map[i][j] == 'C')
				ft_put_img(&game, game.txtrs.coins, j * X, i * Y);
			if (j == game.play.x / X && i == game.play.y / Y)
			{
				ft_put_img(&game, game.txtrs.floor, j * X, i * Y);
				ft_put_img(&game, game.txtrs.play_face, j * X, i * Y);
			}
		}
		i++;
	}
}
