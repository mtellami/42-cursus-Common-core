/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:30:01 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/29 15:53:10 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h> 
# include <sys/wait.h>
# include <stdio.h>

/* -------- Structs -------- */
typedef struct s_data
{
	char	**env;
	char	**cmd;
	char	*path;
}	t_data;

/* -------- Libft -------- */
void	ft_putendl_fd(char *str, int fd);
int		ft_strlen(char *str);
char	**ft_split(char *s, char c);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *s1, char c, char *s2);
char	*ft_strstr(char *str, char *to_find);

/* -------- Srcs -------- */
void	in_exec(int *fd, char **av, t_data data);
void	out_exec(int *fd, char **av, t_data data);
void	free_arr(char **str);
void	errors(char *str);
char	*get_path(char *cmd, char **env);
t_data	get_data(char *av);

#endif