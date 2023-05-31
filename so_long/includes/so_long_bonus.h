/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:43:26 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/23 17:09:16 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

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
char	*ft_itoa(int n);

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
	t_pos	**enemy;
	char	dir;
}	t_map;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	void	*img;
	int		size;
	int		moves;
	t_map	*map;
	int		*place;
}	t_game;

/* ------------ Map Render ------------ */
/*---- utils ----*/
t_pos	**positions(char **map, char c);
t_pos	*element_position(char **map, char c);
void	free_map(char **map);
char	**duplicate_map(char **map);
int		element_count(char **map, char c);
/*--------------*/
t_map	*map_render_bonus(char	*path);
char	**map_validate(char *map_path);
char	**read_map(char *map_path);
int		map_extention(char *str);
int		validate_content(char **map);
int		validate_path(char **map);
int		validate_shape(char **map);

/* ------------ Srcs ------------ */
t_game	*setting_up_bonus(t_map *map);
void	display_bonus(t_game	*so_long);
char	*textures_path_bonus(t_game *so_long, char c);
int		event_bonus(int key, void *param);
int		free_exit_bonus(void *param);
int		enemy_patrol(void *param);
char	*player_dir_1(t_game *game);
char	*player_dir_2(t_game *game);
/* ------------ Errors ------------ */
void	map_errors(int type);
void	function_error(int type);

/* ------------ Moves ------------ */
void	up_bonus(t_game *so_long);
void	down_bonus(t_game *so_long);
void	left_bonus(t_game *so_long);
void	right_bonus(t_game *so_long);
void	ft_swap(char *a, char *b);

#endif