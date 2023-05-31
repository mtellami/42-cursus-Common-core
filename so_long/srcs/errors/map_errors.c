/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:44:57 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 16:12:16 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "so_long.h"

void	map_errors(int type)
{
	if (type == 1)
		ft_putstr("Invalid map extention : Please enter valid map (.ber)", 2);
	else if (type == 2)
		ft_putstr("Invalid map content : Extra or missing map characteres", 2);
	else if (type == 3)
		ft_putstr("Invalid  map shape : Map must be closed and rectangle ", 2);
	else if (type == 4)
		ft_putstr("Invalid map path : Player can't exit or collect all", 2);
}
