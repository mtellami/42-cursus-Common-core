/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   here_doc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:55:16 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/02 09:44:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	writing(int *fd, char *limiter)
{
	char	*line;

	close(fd[0]);
	write(1, "pipe heredoc> ", 14);
	line = get_line(STDIN_FILENO);
	while (line)
	{
		if (!ft_strcmp(limiter, line))
		{
			free(line);
			close(fd[1]);
			exit(EXIT_SUCCESS);
		}
		write(1, "pipe heredoc> ", 14);
		ft_putendl_fd(line, fd[1]);
		free(line);
		line = get_line(STDIN_FILENO);
	}
	free(line);
	close(fd[1]);
	exit(EXIT_SUCCESS);
}

void	here_doc(int ac, char **av)
{
	int	fd[2];
	int	pid;

	if (ac < 6)
		errors("Usage: ./pipex_bonus here_doc LIMITER \"cmd1\" \"cmd2\" file");
	if (pipe(fd) == -1)
		errors("Error");
	pid = fork();
	if (pid == -1)
		errors("Error");
	if (pid == 0)
		writing(fd, av[2]);
	close(fd[1]);
	if (dup2(fd[0], STDIN_FILENO) == -1)
		errors("Error");
	close(fd[0]);
	waitpid(pid, NULL, 0);
}
