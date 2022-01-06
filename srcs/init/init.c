/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:41:20 by jbosquet          #+#    #+#             */
/*   Updated: 2022/01/05 18:58:41 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init(t_game *game, char *file)
{
	game->map.map = ft_get_map(file);
	game->map.y_max = ft_map_ymax(game->map.map);
	game->map.x_max = ft_map_xmax(game->map.map);
	game->map.rect = ft_c_m_rect(game->map.map, game->map.y_max);
	game->map.charset = ft_c_m_char(game->map.map);
	game->map.walls = ft_c_m_walls(game->map.map, game->map.y_max);
	game->map.exit = 0;
	game->map.coins = 0;
	game->map.player = 0;
	game->play.coins = 0;
	game->play.on_coins = 0;
	game->play.on_exit = 0;
	game->play.moves = 0;
	ft_c_m_e_c_p(game);
}

void	ft_init_textures(t_game *game)
{
	int	img_width;
	int	img_height;

	img_height = Y;
	img_width = X;
	game->txtrs.play_face = mlx_xpm_file_to_image(game->mlx,
			"srcs/init/textures/char_face.xpm", &img_width, &img_height);
	game->txtrs.play_back = mlx_xpm_file_to_image(game->mlx,
			"srcs/init/textures/char_back.xpm", &img_width, &img_height);
	game->txtrs.play_right = mlx_xpm_file_to_image(game->mlx,
			"srcs/init/textures/char_right.xpm", &img_width, &img_height);
	game->txtrs.play_left = mlx_xpm_file_to_image(game->mlx,
			"srcs/init/textures/char_left.xpm", &img_width, &img_height);
	game->txtrs.wall = mlx_xpm_file_to_image(game->mlx,
			"srcs/init/textures/wall.xpm", &img_width, &img_height);
	game->txtrs.floor = mlx_xpm_file_to_image(game->mlx,
			"srcs/init/textures/floor.xpm", &img_width, &img_height);
	game->txtrs.coins = mlx_xpm_file_to_image(game->mlx,
			"srcs/init/textures/coins.xpm", &img_width, &img_height);
	game->txtrs.coins_open = mlx_xpm_file_to_image(game->mlx,
			"srcs/init/textures/coins_used.xpm", &img_width, &img_height);
	game->txtrs.exit = mlx_xpm_file_to_image(game->mlx,
			"srcs/init/textures/exit.xpm", &img_width, &img_height);
}
