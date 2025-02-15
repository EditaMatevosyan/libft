/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:34:03 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/15 16:44:55 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;
    t_list *node;
    
    if(!lst || !f || !del)
        return (NULL);
    while (lst)
    {
        node = ft_lstnew(f(lst->content));
        if (!node)
        {
            ft_lstclear(&node, (*del));
            return (NULL);
        }
        ft_lstadd_back(&new_lst, node);
        lst = lst->next;
    }
    return (new_lst);
}