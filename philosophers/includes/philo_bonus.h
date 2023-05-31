/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:02:50 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/19 14:37:31 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>
# include <stdarg.h>
# include <semaphore.h>
# include <signal.h>

/* ------------ Macros ------------- */
# define SUCCESS 0
# define FAILURE 1
/* --- Error codes --- */
# define N_ARGS -1
# define ARGS -2
# define MALLOC -3
# define THREAD_ERR -4
/* --- Actions --- */
# define T_FORK 3
# define EATING 4
# define SLEEPING 5
# define THINKING 6
# define DIED 7
# define FINISHED 8

/* ------------ Structs ------------- */
typedef struct s_philo
{
	size_t			index;
	size_t			meals;
	size_t			last_meal;
	size_t			survive;
	pid_t			pid;
	size_t			start;
	struct s_main	*main;
}	t_philo;

typedef struct s_args
{
	size_t	n_philo;
	size_t	t_die;
	size_t	t_eat;
	size_t	t_sleep;
	size_t	nt_ph_eat;
}	t_args;

typedef struct s_sem
{
	sem_t	*forks;
	sem_t	*state;
	sem_t	*die;
}	t_sem;

typedef struct s_main
{
	struct s_args	args;
	struct s_philo	*philos;
	struct s_sem	semaphores;
	size_t			over;
	size_t			exit;
}	t_main;

/* ------------ Libft ------------- */
int		ft_errors(int err);
int		ft_atol(char *str, size_t *arg);

/* ------------ Srcs ------------- */
void	waiting(size_t start, size_t ms);
int		eat(t_philo *philo);
int		sleep_think(t_philo *philo);
size_t	current_time(size_t start);
int		initialize_bonus(int ac, char **av, t_main *main);
int		launch(t_main *main);
void	*routine(void *arg);
void	state(t_philo *philo, size_t timestamp, int action);
int		is_dead(t_philo *philo);
void	destroy(t_main *main);

#endif