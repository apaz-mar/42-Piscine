/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:48:01 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/31 15:05:25 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (str[i] == '\0')
		result = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 1;
		else
			result = result * 0;
		i++;
	}
	return (result);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main()
{
	char	str[5];
	int	result;

	str[0] = '0';
	str[1] = '1';
	str[2] = '2';
	str[3] = '3';
	result = ft_str_is_numeric(str);
	printf("%d\n", result);
	return (0);
}*/
