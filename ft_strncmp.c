/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:39:53 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/12 18:39:58 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*int main(void)*/
/*{*/
/*	char *word1 = "Buenos dias";*/
/*	char *word2 = "buenos Dias";*/
/*	int	resultado;*/

/*        resultado = ft_strncmp(word1, word2, 100);*/
/*        */
/*        if (resultado != 0)*/
/*	  printf("Las frases son diferentes\n");*/
/*	else*/
/*	  printf("Las frases son iguales\n");*/
/*	return (0);*/
/*}*/
