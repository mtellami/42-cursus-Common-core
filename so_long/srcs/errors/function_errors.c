/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 07:38:29 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 15:42:58 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	function_error(int type)
{
	if (type == 1)
		ft_putstr("Invalid arguments : Please give one map (.ber)", 2);
	else if (type == 2)
		ft_putstr("Open fail : Can't open the giving file", 2);
	else if (type == 3)
		ft_putstr("Malloc fail : unexpected fail during memory allocation", 2);
	else if (type == 4)
		ft_putstr("Read fail : Can't read from giving file", 2);
}
