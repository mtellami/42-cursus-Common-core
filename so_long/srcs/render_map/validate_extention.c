/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_extention.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 07:36:50 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/21 13:45:50 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_extention(char *str)
{
	str += ft_strlen(str) - 4;
	if (ft_strcmp(str, ".ber"))
	{
		map_errors(1);
		return (0);
	}
	return (1);
}
