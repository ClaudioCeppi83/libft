/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:58:35 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/07 16:11:47 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				diff;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		diff = str1[i] - str2[i];
		if (diff != 0)
		{
			return (diff);
		}
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char *word1 = "Buenas noches";
	char *word2 = "Buenas poche";
	int	resultado;

        resultado = ft_memcmp(word1, word2, 9);
        
        if (resultado != 0)
	  printf("Las frases son diferentes");
	else
	  printf("Las frases son iguales");
	return (0);
}*/
