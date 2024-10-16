/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:25:41 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/02 10:39:46 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_src;

	i = 0;
	length_src = 0;
	while (src[length_src] != '\0')
		length_src++;
	while (i < size - 1 && i < length_src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>
//The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
// minated string src to dst, NUL-terminating the result.

//  The  strcpy()  function  copies the string pointed to by src, including
//  the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
// The  strings  may  not overlap, and the destination string dest must be
//large enough to receive the copy.

int	main(void)
{
	char	a[5];
	char	b[4];
	char	*src;
	char	*dest;
	unsigned int	n;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	//a[4] = '\0';
	b[0] = ' ';
	b[1] = ' ';
	b[2] = ' ';
	b[3] = ' ';
	//b[4] = ' ';
	//b[5] = ' ';
	//b[6] = ' ';
	//b[7] = ' ';
	//b[8] = 'h';
	src = b;
	dest = a;
	n = 10;
	//ft_strncpy(dest, src, n);
	n = ft_strlcpy(dest, src, n);
	printf("%s\n", dest);
	printf("%d\n", n);
	return (0);
}*/
