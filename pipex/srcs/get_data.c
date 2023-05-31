/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:52:28 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/29 15:54:28 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

t_data	get_data(char *av)
{
	t_data		data;
	extern char	**environ;

	data.env = environ;
	data.cmd = ft_split(av, ' ');
	if (!data.cmd)
		exit(EXIT_FAILURE);
	data.path = get_path(data.cmd[0], environ);
	if (!data.path)
		exit(EXIT_FAILURE);
	return (data);
}
