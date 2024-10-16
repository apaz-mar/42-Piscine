/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:50:53 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/02 10:22:02 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>
//  The  strcpy()  function  copies the string pointed to by src, including
//  the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
// The  strings  may  not overlap, and the destination string dest must be
//large enough to receive the copy.
// If  the  length of src is less than n, strncpy() writes additional null
//   bytes to dest to ensure that a total of n bytes are written.

int	main(void)
{
	char	a[5];
	char	b[10];
	char	*src;
	char	*dest;
	unsigned int	n;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	b[0] = ' ';
	b[1] = ' ';
	b[2] = ' ';
	b[3] = ' ';
	b[4] = ' ';
	b[5] = ' ';
	b[6] = ' ';
	b[7] = ' ';
	b[8] = 'h';
	src = b;
	dest = a;
	n = 10;
	//ft_strncpy(dest, src, n);
	strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}*/
