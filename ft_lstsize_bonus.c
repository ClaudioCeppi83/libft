/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:31:42 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/15 16:31:45 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	temp = lst;
	i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

/*int main(void)
{
    t_list *head = ft_lstnew("Primer nodo");
    t_list *second = ft_lstnew("Segundo nodo");
    t_list *third = ft_lstnew("Tercer nodo");

    ft_lstadd_front(&head, second);
    ft_lstadd_front(&head, third);

    int size = ft_lstsize(head);
    printf("El tamaño de la lista es: %d\n", size);

    t_list *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/
