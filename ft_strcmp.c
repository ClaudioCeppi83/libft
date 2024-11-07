/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:41:39 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/12 18:41:42 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (-1);
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*int main() {
    char str1[] = "Buenas";
    char str2[] = "buenas";
    int result;

    result = ft_strcmp(str1, str2);

    if (result != 0)
	  printf("Las frases son diferentes\n");
	else
	  printf("Las frases son iguales\n");
	return (0);
}*/
