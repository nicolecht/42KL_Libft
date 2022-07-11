/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:47:43 by nchee             #+#    #+#             */
/*   Updated: 2022/07/07 12:26:55 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = n - 1;
		while (i >= 0 && i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
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
//	ft_memmove(dest+3, src, 7*sizeof(char));
//	printf("Created Function: " "%s\n", dest);
//
//	memmove(dest+3, src, 7*sizeof(char));
//	printf("Standard Function: " "%s\n", dest); 
//}