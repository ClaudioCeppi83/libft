/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:01:32 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/03 13:16:41 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (length);
	while (i < dstsize -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (length);
}

/*
int	main(void)
{
	char original[] = "Epa carajito";
	char copia[10];
	
	printf("Texto original: %s\n", original);
	printf("Longitud del texto original %zu\n", 
			ft_strlcpy(copia, original, sizeof(copia)));
	printf("\n");
	printf("Copia: %s\n", copia);
	
	return(0);
}*/
