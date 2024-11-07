/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:59:11 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/11/02 14:19:49 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
int main(void)
{
    const char *original = "Epa loco";
    char *copy;

    copy = ft_strdup(original);

    if (copy == NULL)
    {
        printf("Error al duplicar la cadena.\n");
        return (1);
    }

    printf("Original: %s\n", original);
	printf("\n");
    printf("Copy: %s\n", copy);

    free(copy);

    return (0);
}*/
