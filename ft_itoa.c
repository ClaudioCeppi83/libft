/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:10:12 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/14 20:10:17 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itoa_length(int n)
{
	int	len;
	int	temp;

	len = 1;
	if (n < 0)
		len++;
	temp = n;
	while (temp / 10 != 0)
	{
		len++;
		temp = temp / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = itoa_length(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len] = '\0';
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

/*
int	main(void)
{
	int n = -2147483649;

	char *result = ft_itoa(n);

	if (result)
	{
		printf("El número %d convertido a string es: %s\n", n, result);

		if (n > 0 && strcmp(result, ft_itoa(n)) == 0)
			printf("Test para número positivo %d es correcto.\n", n);

		else if (n < 0 && strcmp(result, ft_itoa(n)) == 0)
			printf("Test para número negativo %d es correcto.\n", n);

		else if (n == 0 && strcmp(result, "0") == 0)
			printf("Test para número cero es correcto.\n");

		else if (n == -2147483648 && strcmp(result, "-2147483648") == 0)
			printf("Test para el valor mínimo de int %d es correcto.\n", n);

		else
			printf("Test para %d falló.\n", n);
	}
	else
		printf("Error en la conversión de %d\n", n);

	free(result);

	return (0);
}*/
