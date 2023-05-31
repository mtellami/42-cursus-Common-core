/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_exec_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:53:55 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/01 15:19:03 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	in_exec_bonus(char *cmd)
{
	t_data	data;
	int		fd[2];
	int		pid;

	data = get_data(cmd);
	if (pipe(fd) == -1)
		errors("Error");
	pid = fork();
	if (pid == -1)
		errors("Error");
	if (pid == 0)
	{
		close(fd[0]);
		if (dup2(fd[1], STDOUT_FILENO) == -1)
			errors("Error");
		close(fd[1]);
		execve(data.path, data.cmd, NULL);
	}
	close(fd[1]);
	if (dup2(fd[0], STDIN_FILENO) == -1)
		errors("Error");
	close(fd[0]);
	waitpid(pid, NULL, 0);
	free(data.path);
	free_arr(data.cmd);
}
