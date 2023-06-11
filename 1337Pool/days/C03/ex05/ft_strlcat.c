/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:39:07 by mtellami          #+#    #+#             */
/*   Updated: 2022/07/26 11:06:27 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s_len;
	unsigned int	d_len;

	i = 0;
	j = ft_strlen(dest);
	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	if (size <= d_len)
		return (s_len + size);
	while (src[i] && i < size - d_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d_len + s_len);
}
