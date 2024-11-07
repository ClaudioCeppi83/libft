/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:45:48 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/03 19:23:30 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

/*
int main(void)
{
	const char *frase = "berraquera";
	char letra = 'a';
	char *resultado;
	
	resultado = ft_strrchr(frase, letra);

    if (resultado) {
        printf("La letra '%c' se encuentra en la frase \"%s\" 
				en la posición: %ld\n", letra, frase, resultado - frase);
    } else {
        printf("La letra '%c' no se encuentra 
				en la frase \"%s\"\n", letra, frase);
    }

    return 0;
}*/
