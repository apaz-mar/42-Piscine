/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:14:50 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/31 20:30:13 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <string.h>
#include <unistd.h>
#include <stdio.h>
//  The  strcpy()  function  copies the string pointed to by src, including
//  the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
// The  strings  may  not overlap, and the destination string dest must be
//large enough to receive the copy.

int	main(void)
{
	char	a[5];
	char	b[10];
	char	*src;
	char	*dest;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = '\0';
	b[0] = ' ';
	b[1] = ' ';
	b[2] = ' ';
	b[3] = ' ';
	b[4] = ' ';
	b[5] = ' ';
	b[6] = ' ';
	b[7] = ' ';
	b[8] = ' ';
	//src = a;
	//dest = b;
	//ft_strcpy(dest, src);
	strcpy(b, a);
	printf("%s\n", b);
	return (0);
}*/
