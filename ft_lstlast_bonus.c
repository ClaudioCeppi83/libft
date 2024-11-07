/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:52:17 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/15 16:52:21 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}

/*
int main(void)
{
    t_list *head = ft_lstnew("Primer nodo");
    ft_lstadd_front(&head, ft_lstnew("Segundo nodo"));
    ft_lstadd_front(&head, ft_lstnew("Tercer nodo"));

    t_list *last_node = ft_lstlast(head);

    if (last_node) {
        printf("El último nodo contiene: %s\n", (char *)last_node->content);
    } else {
        printf("La lista está vacía.\n");
    }

    t_list *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/