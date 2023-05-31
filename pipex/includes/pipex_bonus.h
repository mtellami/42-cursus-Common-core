/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:42:43 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/01 15:18:08 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h> 
# include <fcntl.h>
# include <sys/wait.h>

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
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strchr(char *str);
char	*ft_substr(char *s, unsigned int start, size_t len);

/* -------- Srcs -------- */
void	errors(char *str);
void	free_arr(char **str);
t_data	get_data(char *av);
char	*get_path(char *cmd, char **env);
void	in_exec_bonus(char *cmd);
void	out_exec_bonus(char *cmd);
void	here_doc(int ac, char **av);
char	*get_line(int fd);

#endif