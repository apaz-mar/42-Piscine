/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:23:03 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/31 15:34:22 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	str[5];
	char	*result;

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'C';
	str[3] = '-';
	result = ft_strupcase(str);
	printf("%s\n", result);
	return (0);
}*/
