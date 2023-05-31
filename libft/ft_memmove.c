/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:17:48 by mtellami          #+#    #+#             */
/*   Updated: 2022/10/11 21:32:00 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src + (n - 1);
	d = dst + (n - 1);
	if (!src && !dst)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (n--)
			*d-- = *s--;
	}
	return (dst);
}
