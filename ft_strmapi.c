/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:53:38 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/14 20:53:42 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	cnt;

	if (!s || !f)
		return (NULL);
	str = (char *) malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	cnt = 0;
	while (*s)
	{
		str[cnt] = f(cnt, *s++);
		cnt++;
	}
	str[cnt] = 0;
	return (str);
}

/*char to_upper(unsigned int index, char c) {*/
/*    (void)index;*/
/*    if (c >= 'a' && c <= 'z') {*/
/*        return c - 32;*/
/*    }*/
/*    return c;*/
/*}*/

/*int main() {*/
/*    const char *original = "PaRaNgAnTuTiRiMiCuArO";*/
/*    char *result;*/

/*    result = ft_strmapi(original, to_upper);*/

/*    if (result == NULL) {*/
/*        printf("Error en la asignación de memoria\n");*/
/*        return 1;*/
/*    }*/

/*    printf("Cadena original: %s\n", original);*/
/*    printf("Cadena transformada: %s\n", result);*/

/*    free(result);*/
/*    return 0;*/
/*}*/
