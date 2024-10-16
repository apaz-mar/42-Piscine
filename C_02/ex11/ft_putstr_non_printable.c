/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:57:41 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/01 14:19:56 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	hex[4];

	i = 0;
	hex[0] = ' ';
	hex[1] = ' ';
	hex[2] = ' ';
	hex[3] = '\0';
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write (1, &str[i], 1);
		else
		{
			hex[0] = '\\';
			hex[1] = (str[i] >> 4) & 0x0F;
			hex[2] = str[i] & 0x0F;
			write (1, &hex, 3);
		}
		i++;
	}
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	str[6];
	int	result;

	str[0] = 'n';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\n';
	str[4] = ' ';
	str[5] = '\0';
	ft_putstr_non_printable(str);
	write (1, "\n", 1);
	//printf("%d\n", result);
	return (1);
}*/
