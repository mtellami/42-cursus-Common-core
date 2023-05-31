/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out_exec_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:27:32 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/01 15:19:11 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	out_exec_bonus(char *cmd)
{
	t_data	data;
	int		pid;

	data = get_data(cmd);
	pid = fork();
	if (pid == -1)
		errors("Error");
	if (pid == 0)
		execve(data.path, data.cmd, NULL);
	waitpid(pid, NULL, 0);
	free(data.path);
	free_arr(data.cmd);
}
