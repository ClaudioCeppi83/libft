/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:11:08 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/12 16:11:14 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dst;
	char	*temp_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0)
		return (dst);
	temp_dst = (char *)dst;
	temp_src = (char *)src;
	if (dst > src)
	{
		temp_dst = temp_dst + (len - 1);
		temp_src = temp_src + (len - 1);
		while (len-- > 0)
			*temp_dst-- = *temp_src--;
	}
	else
	{
		while (len-- > 0)
			*temp_dst++ = *temp_src++;
	}
	return (dst);
}

/*
int	main(void)
{
	char	src1[] = "NO overlapping";
	char	dst[30];

	printf("Caso sin overlapping:\n");
	ft_memmove(dst, src1, 5);
	printf("Original: %s\n", src1);
	printf("Copia: %s\n", dst);
	printf("\n");

	char	src2[] = "Overlapping";
	printf("Caso con overlapping:\n");
	ft_memmove(src2 + 2, src2, 5);
	printf("Original: %s\n", src2);

	return(0);
}*/
