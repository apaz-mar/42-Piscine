/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:14:22 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/31 15:21:49 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (str[i] == '\0')
		result = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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

	str[0] = 'n';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '-';
	result = ft_str_is_printable(str);
	printf("%d\n", result);
	return (0);
}*/
