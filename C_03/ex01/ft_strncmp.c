/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:14:57 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/07 10:55:49 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "Hella";
	int	n = 6;
	
	printf("%d\n", ft_strncmp(a, b, n));
	printf("%d\n", strncmp(a, b, n));
	return (0);
}*/
