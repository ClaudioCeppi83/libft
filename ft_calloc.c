/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:57:12 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/10 18:57:16 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;
	char	*temp;
	size_t	i;

	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	temp = (char *)ptr;
	i = 0;
	while (i < total_size)
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}

/*
int main(void)
{
    int *array;
    int i;

    array = (int *)calloc(5, sizeof(int));

    if (array == NULL)
    {
        printf("Error al asignar memoria con calloc.\n");
        return (1);
    }

    i = 0;
    printf("Valores iniciales del array:\n");
    while (i < 5)
    {
        printf("item[%d] = %d\n", i, array[i]);
        i++;
    }

    free(array);

    return (0);
}*/
