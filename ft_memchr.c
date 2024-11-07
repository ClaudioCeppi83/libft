/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:11:25 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/12 16:11:31 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
	char *word = "Murcielago";
	char letter = 'g';
	char *result;

	result = ft_memchr(word, letter, ft_strlen(word));
	if (result != NULL)
		printf("La letra \"%c\" buscada en la palabra \"%s\", se en encuentra 
		en la posicion %ld de la memoria.\n", letter, word, result - word);
	else
		printf("La letra %c no se encuentra en la palabra %s\n", letter, word);
	return (0);
}*/
