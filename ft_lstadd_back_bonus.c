/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:08:15 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/30 15:48:22 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_l)
{
	t_list	*temp;

	if (new_l == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new_l;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_l;
	return ;
}

/*int main(void)
{
    t_list *head = NULL;
    t_list *new_node1 = ft_lstnew("Primer nodo");
    t_list *new_node2 = ft_lstnew("Segundo nodo");
    t_list *new_node3 = ft_lstnew("Tercer nodo");

    ft_lstadd_back(&head, new_node1);
    ft_lstadd_back(&head, new_node2);
    ft_lstadd_back(&head, new_node3);

    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    t_list *tempo;
    while (head != NULL)
    {
        tempo = head;
        head = head->next;
        free(tempo);
    }

    return 0;
}*/
