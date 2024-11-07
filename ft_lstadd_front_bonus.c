/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:59:42 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/30 15:50:12 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_l)
{
	if (!new_l)
		return ;
	new_l->next = *lst;
	*lst = new_l;
}

/*
int main(void)
{
    t_list *head = ft_lstnew("Primer nodo");
    
    t_list *new_node = ft_lstnew("Nuevo nodo");

    ft_lstadd_front(&head, new_node);

    t_list *current = head;
    while (current != NULL) {
        printf("Contenido: %s\n", (char *)current->content);
        current = current->next;
    }

    current = head;
    while (current != NULL) 
    {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}*/
