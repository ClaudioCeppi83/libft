/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:43:25 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/03 18:03:19 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)(str + i));
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(str + i));
	return (NULL);
}

/*
int main(void)
{
	const char *frase = "murcielago";
	char letra = 'e';
	char *resultado;
	
	resultado = ft_strchr(frase, letra);

    if (resultado) {
        printf("La letra '%c' se encuentra en la frase \"%s\" 
				en la posición: %ld\n", letra, frase, resultado - frase);
    } else {
        printf("La letra '%c' no se encuentra 
		en la frase \"%s\"\n", letra, frase);
    }

    return 0;
}*/
