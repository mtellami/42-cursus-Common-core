/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _direction.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:39:55 by mtellami          #+#    #+#             */
/*   Updated: 2023/03/13 22:47:21 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leet3d.h"

int	_rgb_color(t_rgb rgb)
{
	return ((rgb.r << 16) | (rgb.g << 8) | rgb.b);
}

int	_pixel_color(t_img *img, int x, int y)
{
	char	*pixel_ptr;

	pixel_ptr = img->addr + (y * img->line_length + x
			* (img->bits_per_pixel / 8));
	return (*(unsigned int *)pixel_ptr);
}

int	_direction(double angle, enum e_direction look)
{
	if (look == FACING_UP)
		return (angle >= M_PI);
	else if (look == FACING_DOWN)
		return (angle < M_PI);
	else if (look == FACING_RIGHT)
		return (angle >= 1.5 * M_PI || angle <= 0.5 * M_PI);
	else if (look == FACING_DOWN)
		return (angle > 0.5 * M_PI && angle < 1.5 * M_PI);
	return (-1);
}
