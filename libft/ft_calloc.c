/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:29:43 by mtellami          #+#    #+#             */
/*   Updated: 2022/11/02 18:38:52 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb && size > UINT_MAX / nmemb)
		return (0);
	mem = malloc(nmemb * size);
	if (!mem)
		return (0);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
