/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:43:50 by nchee             #+#    #+#             */
/*   Updated: 2022/07/08 16:07:03 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		if (nbr * sign > 2147483647)
			return (-1);
		if (nbr * sign < -2147483648)
			return (0);
		i++;
	}
	return (nbr * sign);
}

//#include <stdio.h>
//int main(void)
//{
//	int val;
//	char str[] = "  +1234567";
//	char str2[] = "  +1234567";
//	
//	val = atoi(str);
//	printf("Standard FT: string value = %s, int value =%d\n", str, val);
//
//	val = ft_atoi(str2);
//	printf("Created FT: string value = %s, int value =%d\n", str2, val);
//
//	return (0);
//}