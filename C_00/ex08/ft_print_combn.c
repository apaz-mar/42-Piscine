/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaz-mar <apaz-mar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:53:45 by apaz-mar          #+#    #+#             */
/*   Updated: 2023/07/26 11:35:23 by apaz-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	potencia(int p)
{
	int	numero;
	int	i;

	i = 0;
	numero = 1;
	while (i < p)
	{
		numero = 10 * numero;
		i++;
	}
	return (numero);
}

void	into_units(int i, int n, int maximo_consec, int length)
{
	char	cadena[5000000];
	int	t;

	t = i;
	cadena[0] = '0';	
	while (n > 1 && cadena[length] > cadena[length - 1])
	{
		cadena[length++] = '0' + t / potencia(n - 1);
		t %= potencia(n - 1);
		n--;
	}
	cadena[length++] = '0' + i % 10;
	if (i == maximo_consec - 1)
	{
		cadena[length++] = '\n';
	}
	else
	{
		cadena[length++] = ',';
		cadena[length++] = ' ';
	}
	write (1, cadena, length);
}

void	ft_print_combn(int n)
{
	int	i;
	int	length;
	int	maximo_consec;
	int	temp_n;

	length = 1;
	if (n > 0 && n < 10)
	{
		temp_n = n;
		maximo_consec = potencia(temp_n);
		while (temp_n > 0)
		{
			maximo_consec = maximo_consec - (temp_n - 1) * potencia(temp_n - 1);
			temp_n--;
		}
		i = 1;
		while (i <= maximo_consec - 1)
		{
			into_units(i, n, maximo_consec, length);
			i++;
		}
	}
}

/*int	main(void)
{
	ft_print_combn(2);
	write(1, "\n", 1);
	return (0);
}*/
