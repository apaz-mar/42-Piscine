/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:58:02 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/27 12:30:28 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/*#include <stdio.h>

int	main(void)
{
	char	c[4];
	char	*ptr;
	int	counter;

	c[0] = 'a';
	c[1] = 'b';
	c[2] = 'c';
	c[3] = '\0';
	counter = 0;
	ptr = c;
	counter = ft_strlen(ptr);
	printf("%d\n", counter);
	return (0);
}*/
