/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:26:09 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/15 15:26:11 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int main(void)
{

    char *data = "Hello, world!";

    t_list *node = ft_lstnew(data);

    if (node == NULL)
    {
        printf("Error: No se pudo crear el nodo.\n");
        return 1;
    }

    printf("Contenido del nodo: %s\n", (char *)node->content);
    printf("Puntero next: %p\n", node->next);

    free(node);

    return 0;
}*/
