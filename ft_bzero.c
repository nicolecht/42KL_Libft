/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:45:00 by nchee             #+#    #+#             */
/*   Updated: 2022/07/06 18:55:41 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[50] = "waffleicecream";
//	bzero(str + 3, 1*sizeof(char));
//	printf("Standard Function: " "%s\n", str);
//	ft_bzero(str + 3, 1*sizeof(char));
//	printf("Created Function: " "%s\n", str);
//}
