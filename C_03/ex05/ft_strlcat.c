/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:09:38 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/08/07 11:14:50 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_dest;
	unsigned int	i;

	i = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[i] != '\0' && i < nb)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	i;
	unsigned int	remaining_dest;
	unsigned int	len_src;

	len_dest = 0;
	len_src = 0;
	i = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
		if (len_dest >= size)
			return (0);
	}
	if ((len_dest + len_src) >= size)
		len_src = size - len_dest - 1;
	len_dest = ft_strncat(dest, src, len_src);
	return (len_dest);
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
	char	a[] = "Hello ";
	char	b[] = "World";

	printf("%d\n", ft_strlcat(a, b, 9));
	//printf("%d\n", strlcat(a, b, 15));
	return (0);
}*/
