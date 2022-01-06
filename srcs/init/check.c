/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:42:49 by jbosquet          #+#    #+#             */
/*   Updated: 2022/01/05 18:58:41 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_struc(t_game *game)
{
	int	result;

	result = 0;
	if (!game->map.map[0])
		printf("Error\nAucune map.\n");
	else if (!game->map.rect)
		printf("Error\nLa map n'est pas rectangle.\n");
	else if (!game->map.charset)
		printf("Error\nLa map contient un/des caractères inconnu(s).\n");
	else if (!game->map.walls)
		printf("Error\nLa map a un probleme de mur.\n");
	else if (!game->map.exit)
		printf("Error\nLa map doit contenir 1 sortie.\n");
	else if (!game->map.coins)
		printf("Error\nLa map ne possède aucun collectible.\n");
	else if (game->map.player < 1)
		printf("Error\nLa map doit contenir 1 joueur.\n");
	else
		result = 1;
	return (result);
}
