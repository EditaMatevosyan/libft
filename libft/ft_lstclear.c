/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:33:36 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/15 14:23:15 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    while (*lst)
    {
        del((*lst)->content);
        temp = (*lst)->next;
        free(*lst);
        (*lst) = temp;
    }
}
