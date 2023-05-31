/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:37:10 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 23:35:57 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

t_img	img_init(t_leet *leet, char *texture)
{
	t_img	img;
	int		size;

	size = TEXTURE_DIMENTION;
	img.img = mlx_xpm_file_to_image(leet->mlx, texture, &size, &size);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel,
			&img.line_length, &img.endian);
	return (img);
}

void	textures_initialize(t_leet *leet, t_parser *parser)
{
	leet->ray.map._north = img_init(leet, parser->texture[0]);
	leet->ray.map._south = img_init(leet, parser->texture[1]);
	leet->ray.map._west = img_init(leet, parser->texture[2]);
	leet->ray.map._east = img_init(leet, parser->texture[3]);
	leet->ray.map._door = img_init("texturs/door.xpm");
	leet->ray.map.fire = malloc(sizeof(t_img) * 9);
	leet->ray.map.fire[0] = img_init(leet, "animated/fire01.xpm");
	leet->ray.map.fire[1] = img_init(leet, "animated/fire02.xpm");
	leet->ray.map.fire[2] = img_init(leet, "animated/fire03.xpm");
	leet->ray.map.fire[3] = img_init(leet, "animated/fire04.xpm");
	leet->ray.map.fire[4] = img_init(leet, "animated/fire05.xpm");
	leet->ray.map.fire[5] = img_init(leet, "animated/fire06.xpm");
	leet->ray.map.fire[6] = img_init(leet, "animated/fire07.xpm");
	leet->ray.map.fire[7] = img_init(leet, "animated/fire08.xpm");
	leet->ray.map.fire[8] = img_init(leet, "animated/fire09.xpm");
}

void	map_initialize(t_leet *leet, t_parser *parser)
{
	textures_initialize(leet, parser);
	leet->ray.map._floor.r = parser->c_floor[0];
	leet->ray.map._floor.g = parser->c_floor[1];
	leet->ray.map._floor.b = parser->c_floor[2];
	leet->ray.map._ceil.r = parser->c_ceiling[0];
	leet->ray.map._ceil.g = parser->c_ceiling[1];
	leet->ray.map._ceil.b = parser->c_ceiling[2];
	leet->ray.map.map = parser->map;
}

void	initialize(t_leet *leet, t_parser *parser)
{
	map_initialize(leet, parser);
	leet->ray.player.vector.x = parser->p_indices[0] * TILE_SIZE;
	leet->ray.player.vector.y = parser->p_indices[1] * TILE_SIZE;
	leet->ray.player.fov = 60 * (M_PI / 180);
	leet->ray.player.rays = 0x0;
	leet->ray.player.frame = 0;
	if (parser->position == NORTH)
		leet->ray.player.angle = 1.5 * M_PI;
	else if (parser->position == SOUTH)
		leet->ray.player.angle = 0.5 * M_PI;
	else if (parser->position == WEST)
		leet->ray.player.angle = M_PI;
	else if (parser->position == EAST)
		leet->ray.player.angle = 0;
}
