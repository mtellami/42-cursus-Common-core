/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:43:29 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 17:00:14 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* ------ C Library ------ */
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <mlx.h>

/* --------------- Libft --------------- */
void	ft_putstr(char *str, int fd);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
char	**ft_split(char const *s, char c);
void	ft_putnbr(int n);

/* ------------ Structures ------------ */
typedef struct s_pos
{
	int	x;
	int	y;
}	t_pos;

typedef struct s_map
{
	char	**map;
	int		x;
	int		y;
	int		c;
	t_pos	*player;
}	t_map;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	void	*img;
	int		size;
	int		moves;
	t_map	*map;
}	t_game;

/* ------------ Map Render ------------ */
/*---- utils ----*/
t_pos	**positions(char **map, char c);
t_pos	*element_position(char **map, char c);
void	free_map(char **map);
char	**duplicate_map(char **map);
int		element_count(char **map, char c);
/*--------------*/
t_map	*map_render(char	*path);
char	**map_validate(char *map_path);
char	**read_map(char *map_path);
int		map_extention(char *str);
int		validate_content(char **map);
int		validate_path(char **map);
int		validate_shape(char **map);

/* ------------ Srcs ------------ */
t_game	*setting_up(t_map *map);
void	display(t_game	*so_long);
char	*textures_path(char c);
int		event(int key, void	*param);
int		free_exit(void *param);

/* ------------ Errors ------------ */
void	map_errors(int type);
void	function_error(int type);

/* ------------ Moves ------------ */
void	up(t_game *so_long);
void	down(t_game *so_long);
void	left(t_game *so_long);
void	right(t_game *so_long);
void	ft_swap(char *a, char *b);

#endif