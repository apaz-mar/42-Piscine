/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:44:56 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/02 15:54:55 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	i = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
/*
//The  strcat() function appends the src string to the dest string, over‐
//writing the terminating null byte ('\0') at the end of dest,  and  then
//adds  a  terminating  null  byte.  The strings may not overlap, and the
//dest string must have enough space for the  result.   If  dest  is  not
//large  enough, program behavior is unpredictable;
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	a[5];
	char	b[10];
	int	n;
	char	cat[16];

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = '\0';
	b[0] = 'a';
	b[1] = 'b';
	b[2] = 'c';
	b[3] = ' ';
	b[4] = ' ';
	b[5] = ' ';
	b[6] = ' ';
	b[7] = ' ';
	b[8] = '\0';
	//cat = ft_strcat(b, a);
	printf("%s\n", ft_strcat(b, a));
//	printf("%s\n", strcat(a, b));
	return (0);
}*/
