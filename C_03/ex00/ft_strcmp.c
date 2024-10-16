/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:20:04 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/02 14:29:22 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		else
			i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	a[5];
	char	b[10];
	int	n;
	int	comp;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = '\0';
	b[0] = 'a';
	b[1] = '\0';
	b[2] = 'c';
	b[3] = '\0';
	b[4] = ' ';
	b[5] = ' ';
	b[6] = ' ';
	b[7] = ' ';
	b[8] = ' ';
	comp = ft_strcmp(a, b);
	printf("%d\n", comp);
	printf("%d\n", strcmp(a, b));
	return (0);
}*/
