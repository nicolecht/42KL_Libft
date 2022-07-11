/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:50:10 by nchee             #+#    #+#             */
/*   Updated: 2022/07/06 20:26:08 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	printf("Standard Function: %s\n", strrchr("waffle", 'f'));
//	printf("Created Function: %s\n", ft_strrchr("waffle", 'f'));
//}