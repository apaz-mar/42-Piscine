/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:10:52 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/31 15:12:48 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (str[i] == '\0')
		result = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

int	main(void)
{
	char	str[5];
	int	result;

	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	str[3] = 'd';
	result = ft_str_is_uppercase(str);
	printf("%d\n", result);
	return (0);
}*/
