/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:28:54 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/09/28 20:08:50 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	c;

	if (n == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst == NULL)
	{
		c = *((char *)src);
		(void)c;
	}
	if (src == NULL)
	{
		c = *((char *)dst);
		(void)c;
	}
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	char src[] = "Hello, world!";
	char dst[20];
	char dst_empty[20] = ""; // para probar el caso con n=0
	char *null_test = NULL;

	// Caso básico de copia
	ft_memcpy(dst, src, ft_strlen(src) + 1);
	printf("Test 1 - Copia normal:\n");
	printf("Esperado: %s\n", src);
	printf("Resultado: %s\n\n", dst);

	// Caso de tamaño n = 0 (no debe copiar nada)
	ft_memcpy(dst_empty, src, 0);
	printf("Test 2 - Tamaño cero:\n");
	printf("Esperado: \"\" (cadena vacía)\n");
	printf("Resultado: \"%s\"\n\n", dst_empty);

	// Caso de ambas entradas nulas (debe retornar NULL)
	printf("Test 3 - Ambas entradas NULL:\n");
	printf("Esperado: NULL\n");
	printf("Resultado: %p\n\n", ft_memcpy(null_test, null_test, 5));

	return (0);
}*/