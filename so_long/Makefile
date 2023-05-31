NAME = so_long
BONUS = so_long_bonus
CFLAGS = -Wall -Wextra -Werror -I includes/
MLX =  -lmlx -framework OpenGL -framework AppKit

LIBFT = libft/ft_putstr.c libft/ft_strcmp.c libft/ft_strjoin.c libft/ft_strlen.c \
		libft/ft_split.c libft/ft_strdup.c libft/ft_putnbr.c libft/ft_itoa.c \

SRCS = srcs/functions/so_long.c \
	   srcs/utils/element_count.c srcs/utils/element_position.c srcs/utils/free_memory.c \
	   srcs/render_map/map_render.c srcs/render_map/map_validate.c srcs/render_map/read_map.c \
	   srcs/render_map/validate_content.c srcs/render_map/validate_extention.c \
	   srcs/render_map/validate_path.c srcs/render_map/validate_shape.c srcs/functions/display.c \
	   srcs/functions/setting_up.c srcs/functions/textures_path.c srcs/utils/duplicate_map.c \
	   srcs/moves/up.c srcs/functions/event.c srcs/moves/down.c srcs/moves/left.c srcs/moves/right.c \
	   srcs/moves/ft_swap.c srcs/utils/positions.c srcs/functions/free_exit.c \
	   srcs/errors/function_errors.c srcs/errors/map_errors.c \

B_SRCS = bonus/functions/so_long_bonus.c \
	   srcs/utils/element_count.c srcs/utils/element_position.c srcs/utils/free_memory.c \
	   bonus/render_map/map_render_bonus.c srcs/render_map/map_validate.c srcs/render_map/read_map.c \
	   bonus/render_map/validate_content.c srcs/render_map/validate_extention.c \
	   srcs/render_map/validate_path.c srcs/utils/positions.c srcs/render_map/validate_shape.c \
	   bonus/functions/display_bonus.c bonus/functions/setting_up_bonus.c \
	   bonus/functions/textures_path_bonus.c srcs/utils/duplicate_map.c bonus/moves/up_bonus.c \
	   bonus/functions/event_bonus.c bonus/moves/down_bonus.c bonus/moves/left_bonus.c \
	   bonus/moves/right_bonus.c srcs/moves/ft_swap.c bonus/functions/free_exit_bonus.c \
	   srcs/errors/function_errors.c srcs/errors/map_errors.c bonus/functions/enemy_patrol.c\
	   bonus/player_sprite/player_dir_1.c bonus/player_sprite/player_dir_2.c \

O_LIBFT = $(LIBFT:.c=.o)

OBJS = $(SRCS:.c=.o)

B_OBJS = $(B_SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(O_LIBFT) $(OBJS)
		cc $(CFLAGS) $(O_LIBFT) $(OBJS) $(MLX) -o $(NAME)

bonus : all $(BONUS)

$(BONUS) : $(O_LIBFT) $(B_OBJS)
		cc $(CFLAGS) $(O_LIBFT) $(B_OBJS) $(MLX) -o $(BONUS)

clean : 
		rm -fr $(O_LIBFT) $(OBJS) $(B_OBJS)

fclean : clean
		rm -fr $(NAME) $(BONUS)

re : clean all
