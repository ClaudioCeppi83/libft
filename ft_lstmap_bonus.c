/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:11:39 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/30 16:23:36 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_new_node(void *(*f)(void *), void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->content = f(content);
		new_node->next = NULL;
	}
	return (new_node);
}

static void	ft_node_to_lst(t_list **new_lst, t_list *new_node, t_list **last)
{
	if (*last)
		(*last)->next = new_node;
	else
		*new_lst = new_node;
	*last = new_node;
}

static void	ft_clear_list(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		del(temp->content);
		free(temp);
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*last;

	new_lst = NULL;
	last = NULL;
	while (lst)
	{
		new_node = ft_new_node(f, lst->content);
		if (!new_node)
		{
			ft_clear_list(&new_lst, del);
			return (NULL);
		}
		ft_node_to_lst(&new_lst, new_node, &last);
		lst = lst->next;
	}
	return (new_lst);
}

/*
void *duplicate_string(void *content)
{
    char *str = (char *)content;
    char *new_str = malloc(strlen(str) + 1);
    if (new_str)
        strcpy(new_str, str);
    return new_str;
}

void free_content(void *content)
{
    free(content);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}

int main(void)
{
    t_list *lst = ft_lstnew(strdup("Hello"));
    ft_lstadd_back(&lst, ft_lstnew(strdup("World")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("42")));

    t_list *new_lst = ft_lstmap(lst, duplicate_string, free_content);

    printf("Original List:\n");
    print_list(lst);

    printf("New List:\n");
    print_list(new_lst);

    ft_lstclear(&lst, free_content);

    ft_lstclear(&new_lst, free_content);

    return 0;
}*/
