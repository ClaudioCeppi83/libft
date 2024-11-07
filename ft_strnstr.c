/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:12:55 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/12 16:12:59 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ndl_len;
	size_t	haystack_len;

	ndl_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (ndl_len == 0)
		return ((char *)haystack);
	if (ndl_len > len || ndl_len > haystack_len)
		return (NULL);
	i = 0;
	while (i <= len - ndl_len && i < haystack_len)
	{
		if (ft_memcmp(&haystack[i], needle, ndl_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
    char haystack[] = "Hello, world!";
    char needle1[] = "world";
    char needle2[] = "42";
    char needle3[] = "";

    char *result;

    // Caso 1: Encontrar "world" en "Hello, world!" con suficiente longitud
    result = ft_strnstr(haystack, needle1, 13);
    printf("Caso 1: %s\n", result ? result : "No encontrado");

    // Caso 2: Intentar encontrar "42" en "Hello, world!" (no existe)
    result = ft_strnstr(haystack, needle2, 13);
    printf("Caso 2: %s\n", result ? result : "No encontrado");

    // Caso 3: Búsqueda de una cadena vacía
    result = ft_strnstr(haystack, needle3, 13);
    printf("Caso 3: %s\n", result ? result : "No encontrado");

    // Caso 4: Intentar encontrar "world" pero con longitud insuficiente
    result = ft_strnstr(haystack, needle1, 5);
    printf("Caso 4: %s\n", result ? result : "No encontrado");

}*/