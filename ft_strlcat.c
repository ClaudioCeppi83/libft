/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:20:27 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/03 13:14:29 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (lensrc);
	while ((lendst + i) < (dstsize - 1) && src[i] != '\0')
	{
		dst[lendst + i] = src[i];
		i++;
	}
	if ((lendst + i) < dstsize)
		dst[lendst + i] = '\0';
	if (lendst >= dstsize)
		return (dstsize + lensrc);
	return (lendst + lensrc);
}

/*
int main(void)
{
    char dest[10] = "Hello, ";
    const char *src = "world!";
    size_t dstsize = sizeof(dest);
    size_t result;

    result = ft_strlcat(dest, src, dstsize);

    printf("After strlcat: \"%s\"\n", dest);
    printf("Length of concatenated string: %zu\n", result);

    return 0;
}*/
