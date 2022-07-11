/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:06:36 by nchee             #+#    #+#             */
/*   Updated: 2022/07/06 18:55:34 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	total;

	if (size > sizeof(size_t))
		return (0);
	total = count * size;
	dest = (char *)malloc(sizeof(char) * total);
	if (!dest)
		return (0);
	ft_bzero(dest, total);
	return (dest);
}
