/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:42:53 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/01 15:45:23 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	open_files(char *path, int op)
{
	int	fd;

	fd = -1;
	if (op == 1)
		fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, 0777);
	else if (op == 2)
		fd = open(path, O_RDONLY);
	else if (op == 3)
		fd = open(path, O_CREAT | O_WRONLY | O_APPEND, 0777);
	if (fd == -1)
		errors("Error opening source files");
	return (fd);
}

int	main(int ac, char **av)
{
	int	cmd;
	int	fd[2];

	if (ac < 5)
		errors("Usage: ./pipex_bonus file1 \"cmd1\" \"cmd2\" ... \"cmdn\" file2");
	if (!ft_strcmp(av[1], "here_doc"))
	{
		cmd = 3;
		here_doc(ac, av);
		fd[1] = open_files(av[ac - 1], 3);
	}
	else
	{
		cmd = 2;
		fd[0] = open_files(av[1], 2);
		fd[1] = open_files(av[ac - 1], 1);
		if (dup2(fd[0], STDIN_FILENO) == -1)
			errors("Error");
	}
	while (cmd < ac - 2)
		in_exec_bonus(av[cmd++]);
	if (dup2(fd[1], STDOUT_FILENO) == -1)
		errors("Error");
	out_exec_bonus(av[ac - 2]);
	return (EXIT_SUCCESS);
}
