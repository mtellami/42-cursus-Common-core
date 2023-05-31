/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:27:50 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/02 08:39:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	in_exec(int *fd, char **av, t_data data)
{
	int	i;

	close(fd[0]);
	i = open(av[1], O_RDONLY);
	if (i == -1)
		errors("Error : fail access file");
	if (dup2(fd[1], STDOUT_FILENO) == -1)
		errors("Error");
	close(fd[1]);
	if (dup2(i, STDIN_FILENO) == -1)
		errors("Error");
	close(i);
	execve(data.path, data.cmd, NULL);
}
