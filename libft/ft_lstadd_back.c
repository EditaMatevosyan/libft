/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:58:37 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/15 13:10:15 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    last = ft_lstlast(*lst);
    if (!lst)
        return;
    if (!*lst)
    {
        *lst = new;
        return;
    }    
    last->next = new;
}