/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:49:15 by nchee             #+#    #+#             */
/*   Updated: 2022/07/07 17:38:18 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	i = ft_strlen(dest);
	j = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size < 1)
		return (s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < d)
		return (s + size);
	else
		return (d + s);
}

//#include <stdio.h>
//int main(void)
//{
//	char dest[50] = "air";
//	char src[50] = "bubble";
//	unsigned int size = 9;
//
//	printf("%zu\n", ft_strlcat(dest, src, size));
//	printf("%s", dest);
//}
