/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 21:22:41 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/08 12:45:05 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign; 
			i++;
		}
		else if (str[i] == '+')
			i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = str[i] - '0' + 10 * result;
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char	str[] = "    ---+--+2147483648ab567";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
