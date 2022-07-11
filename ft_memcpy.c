/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:47:29 by nchee             #+#    #+#             */
/*   Updated: 2022/07/08 12:09:49 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char dest[50] = "waffl";
//	char src[50] = "ice";
//
//	ft_memcpy(dest+7, src, 7*sizeof(char));
//	printf("Created Function: " "%s\n", dest);
//
//	memcpy(dest+7, src, 7*sizeof(char));
//	printf("Standard Function: " "%s\n", dest); 
//}