/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbosquet <jbosquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:27:08 by jbosquet          #+#    #+#             */
/*   Updated: 2022/01/05 18:58:41 by jbosquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_get_map(char *file)
{
	char	**map;
	char	*map_line;
	char	buffer[1];
	int		i;
	int		fd;

	i = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (read(fd, buffer, 1) > 0)
		i++;
	close(fd);
	map_line = malloc(sizeof(char) * i + 1);
	fd = open(file, O_RDONLY);
	i = 0;
	while (read(fd, buffer, 1))
		map_line[i++] = buffer[0];
	map_line[i] = 0;
	map = ft_split(map_line, '\n');
	free(map_line);
	return (map);
}

int	ft_map_ymax(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int	ft_map_xmax(char **map)
{
	int	i;

	i = 0;
	if (!map[0])
		return (0);
	while (map[0][i])
		i++;
	return (i);
}

void	ft_free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		free(map[i++]);
	free(map);
}
