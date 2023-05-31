/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:26:11 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/15 03:52:51 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char *str, ...);
void	ft_putchar(char c, int *size);
void	ft_putstr(char *str, int *size);
void	ft_putnbr(int nbr, int *size);
void	ft_putnbr_u(unsigned int nbr, int *size);
void	ft_puthex(unsigned long i, char *hex, int *size);

#endif
